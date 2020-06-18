--[[
    This takes a list of Pawn natives and generates C function bindings for them.

    For string/array outputs, use 
        PARAM_ANNOTE (outarr:array_name:array_length_param)
    after the native to designate an output array.

    For array inputs, since they are not null terminated, a length parameter
    must be specified and annotated as follows.
        PARAM_ANNOTE (inarr:array_name:array_length_param)

    ** ARGUMENT TYPES SUCH AS [{Text3D,_}:Argname] SHOULD BE REMOVED AHEAD OF TIME, AND REPLACED WITH
    EITHER NOTHING (default to int) OR Float.

    ** RETURN TYPE DECORATORS SUCH AS [Text3D:Func] SHOULD ALSO BE REMOVED AHEAD OF TIME
]]


assert(_VERSION == "Lua 5.2", "Please run this with Lua 5.2")

local ins = table.insert

local declaration_lines = {}
local declarations = {}

io.input( [[natives.txt]] )

for line in io.lines() do
    if line:match("^native ") then
        ins( declaration_lines, line )
    end
end

for _, line in ipairs( declaration_lines ) do
    local _, name, restofline = line:match("^(%g+%s+[^%s%w%_]*)([%w%_]+)(.*)$")
    local postargs = restofline:match("%b()(.*)$") --Matches anything past the arguments
        
    local decl = {}
    ins( declarations, decl )

    local args = {}

    --Match any group of non-commas within the parentheses-enclosed text
    for basearg in restofline:match("%b()"):sub(2,-2):gmatch("([^%,]+)") do
        local _,constp = basearg:find( "const " )
        local arg = basearg

        if constp then
            arg = arg:sub( constp, arg:len() )
        end

        arg = arg:gsub( "%s", "" )
        local argtype = "int"

        local dp = arg:find( "=" )

        if dp then
            arg = arg:sub( 1, dp - 1 )
        end

        local ftp = arg:find( ":" )

        if ftp then
            local atype = arg:sub( 1, ftp - 1 ):gsub( "&", "" ):lower()

            if atype == "float" then
                argtype = atype
            end

            arg = arg:sub( ftp + 1, arg:len() )
        end

        if basearg:find( "&" ) then
            argtype = argtype .. "&"
        end

        local brp = arg:find( "[]", nil, true )

        if brp then
            arg = arg:gsub( "%[]", "" )
            argtype = argtype .. "*"
        end

        arg = arg:gsub( "&", "" )

        args[arg] = { 
            name = arg, 
            type = argtype
        }

        args[#args + 1] = args[arg]
    end

    local in_arrays = {}
    local out_arrays = {}
    local out_strings = {}

    local _, endannotep = restofline:find( "PARAM_ANNOTE" )

    if endannotep then
        local annote = restofline:sub( endannotep + 1, restofline:len() )

        for r in annote:gmatch( "%b()" ) do --[["([%a_]+):([%a_]+):([%a_]+)" ) do]]
            local params = {}

            for param in r:gmatch( "([%a%d_]+)" ) do
                ins( params, param )    
            end

            local type = params[1]

            if type == "outarr" then
                local asserr = "Bad output array annotation params to native '" .. name .. "'."
                local param = assert( params[2], asserr )
                local paramlen = assert( params[3], asserr )

                assert( args[param], asserr )
                assert( args[paramlen], asserr )

                out_arrays[param] = {
                    param = param,
                    lenparam = paramlen
                }

                out_arrays[#out_arrays + 1] = out_arrays[param]
            elseif type == "outstr" then
                local asserr = "Bad output array annotation params to native '" .. name .. "'."
                local param = assert( params[2], asserr )
                local paramlen = assert( params[3], asserr )

                assert( args[param], asserr )
                assert( args[paramlen], asserr )

                out_strings[param] = {
                    param = param,
                    lenparam = paramlen
                }

                out_strings[#out_strings + 1] = out_strings[param]
            elseif type == "inarr" then
                local asserr = "Bad input array annotation params to native '" .. name .. "'."
                local param = assert( params[2], asserr )
                local paramlen = assert( params[3], asserr )

                assert( args[param], asserr )
                assert( args[paramlen], asserr )

                in_arrays[param] = {
                    param = param,
                    lenparam = paramlen
                }

                in_arrays[#in_arrays + 1] = in_arrays[param]
            end
        end
    end

    decl.name = name
    decl.args = args
    decl.out_arrays = out_arrays
    decl.out_strings = out_strings
    decl.in_arrays = in_arrays
end

local f = io.open( "functions.cpp", "w" )

for _,decl in ipairs( declarations ) do
    local name = decl.name
    local args = decl.args
    local out_arrays = decl.out_arrays
    local out_strings = decl.out_strings
    local in_arrays = decl.in_arrays

    local cfunc = "int " .. name .. "("

    for k,arg in ipairs( args ) do
        cfunc = cfunc .. arg.type .. " " .. arg.name .. ((k < #args) and ', ' or '')
    end

    cfunc = cfunc .. [[)
{
    static AMX_NATIVE func = amx_FindNative(pAMX, __FUNCTION__);
]]

    for k,arg in ipairs( args ) do
        local name = arg.name
        local type = arg.type

        if type:find( "&" ) or out_arrays[name] or out_strings[name] then
            cfunc = cfunc .. "\tcell* " .. name .. "_phys;\n"
        end

        if k == #args then
            cfunc = cfunc .. '\n'
        end
    end

    cfunc = cfunc .. "\tcell args[" .. #args + 1 .. "] =\n\t{\n\t\tsizeof(args) - sizeof(cell),\n\t\t"

    for k,arg in ipairs( args ) do
        local name = arg.name
        local type = arg.type

        if out_arrays[name] then
            cfunc = cfunc .. "amx_Allot(pAMX, " .. out_arrays[name].lenparam .. ", &" .. name .. "_phys)"
        elseif out_strings[name] then
            cfunc = cfunc .. "amx_Allot(pAMX, " .. out_strings[name].lenparam .. ", &" .. name .. "_phys)"
        elseif in_arrays[name] then
            cfunc = cfunc .. "amx_NewArray(pAMX, (int*)" .. name .. ", " .. in_arrays[name].lenparam .. ")"
        elseif type:find( "&" ) then
            cfunc = cfunc .. "amx_Allot(pAMX, 1, &" .. name .. "_phys)"
        elseif type:find( "*" ) then                                --assume regular string
            cfunc = cfunc .. "amx_NewString(pAMX, (const char*)" .. name .. ")"
        elseif type:find( "float" ) then
            cfunc = cfunc .. "amx_ftoc(" .. name .. ")"
        else
            cfunc = cfunc .. name
        end

        if k < #args then cfunc = cfunc .. ", " end
    end

    cfunc = cfunc .. '\n\t};\n\n\tint ret = func(pAMX, args);\n\n'

    for k,arg in ipairs( args ) do
        local name = arg.name
        local type = arg.type

        if out_arrays[name] then
            cfunc = cfunc .. "\tamx_GetArray(" .. name .. "_phys, (int*)" .. name .. ", " .. out_arrays[name].lenparam .. ");\n"
            cfunc = cfunc .. "\tamx_Release(pAMX, args[" .. k .. "]);\n\n"
        elseif out_strings[name] then
            cfunc = cfunc .. "\tamx_GetString((char*)" .. name .. ", " .. name .. "_phys, " .. "0, " .. out_strings[name].lenparam .. ");\n"
            cfunc = cfunc .. "\tamx_Release(pAMX, args[" .. k .. "]);\n\n"
        elseif type:find( '&' ) then
            cfunc = cfunc .. "\t" .. name .. " = *((" .. type:gsub( "&", '' ):gsub( '*', '' ) .. "*)" .. name .. "_phys);\n"
            cfunc = cfunc .. "\tamx_Release(pAMX, args[" .. k .. "]);\n\n"
        elseif type:find( '*' ) then
            cfunc = cfunc .. "\tamx_Release(pAMX, args[" .. k .. "]);\n\n"
        end
    end

    cfunc = cfunc .. '\treturn ret;\n}'

    f:write( cfunc .. '\n\n' )
end

f:close()



f = io.open( "functions.h", "w" )

for _,decl in ipairs( declarations ) do
    local name = decl.name
    local args = decl.args
    local out_arrays = decl.out_arrays
    local in_arrays = decl.in_arrays

    local cfunc = "int " .. name .. "("

    for k,arg in ipairs( args ) do
        cfunc = cfunc .. arg.type .. " " .. arg.name .. ((k < #args) and ', ' or '')
    end

    cfunc = cfunc .. ");"

    f:write( cfunc .. '\n' )
end

f:close()
