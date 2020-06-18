assert(_VERSION == "Lua 5.2", "Please run this with Lua 5.2")
--[[=================================
    Edit these variables as necessary
    =================================]]

    --Function array declaration (type + name)
    lual_reg_array_declaration = [=[static const luaL_Reg FuncArr[]]=]
    
    --Lua C Function return type
    luac_function_return_type  = [[static int]]
    
    --Function to transform base name into name of Lua C function
    base_to_lua_name_transform = function(BaseName)
        return "luaamx_" .. BaseName
    end
    
    --[[Size of buffer to allocate for out-strings from AMX.
      I don't currently know how to actually find out the required size,
      if that's even possible.]]
    temp_string_buffer_size = 128

if not AMX_Function_Declarations then
    dofile "function_mapping_out.lua"
end

local ins = table.insert
local concat = table.concat
local fmt = string.format

local types = {
    ["char*"      ] = {
        General = {
            Direction = "in";
            LuaType   = "string"};
        VariableDefs   = function(List, Name, ArgNum)
            ins(List, fmt(
          [[    char* %s = NULL;]], Name))
        end;
        ArgCheckFetch  = function(List, Name, ArgNum)
            ins(List, fmt(
          [[    %s = (char*)luaL_checkstring(L, %u);]], Name, ArgNum))
        end;
        BaseInvocation = function(List, Name, ArgNum)
            ins(List, fmt(
              [[%s]], Name))
        end;
        PushRetVals    = function(List, Name, ArgNum)
        end;
        };
    ["char*|outstr"]= {
        General = {
            Direction = "out";
            LuaType   = "string"};
        VariableDefs   = function(List, Name, ArgNum, Argument)
            ins(List, fmt(
          [[    char* %s = (char*)calloc((size_t)%u, sizeof(char));]], Name, temp_string_buffer_size))
        end;
        ArgCheckFetch  = function(List, Name, ArgNum, Argument)
            ins(List, fmt(
          [[    if (%s == NULL) {luaL_error(L, "Memory-allocation failure for return value '%%s' (tried to allocate %u bytes)", "%s");};]],
            Name, temp_string_buffer_size, Name))
        end;
        BaseInvocation = function(List, Name, ArgNum, Argument)
            ins(List, fmt(
              [[%s]], Name))
        end;
        PushRetVals    = function(List, Name, ArgNum, Argument)
            ins(List, fmt(
          [[    lua_pushstring(L, %s); free(%s); NumRetVal += 1;]], Name, Name))
        end;
        };
    ["const char*"] = {
        General = {
            Direction = "in";
            LuaType   = "string"};
        VariableDefs   = function(List, Name, ArgNum)
            ins(List, fmt(
          [[    const char* %s = NULL;]], Name))
        end;
        ArgCheckFetch  = function(List, Name, ArgNum)
            ins(List, fmt(
          [[    %s = luaL_checkstring(L, %u);]], Name, ArgNum))
        end;
        BaseInvocation = function(List, Name, ArgNum)
            ins(List, fmt(
              [[%s]], Name))
        end;
        PushRetVals    = function(List, Name, ArgNum)
        end;
        };
    ["float"      ] = {
        General = {
            Direction = "in";
            LuaType   = "number"};
        VariableDefs   = function(List, Name, ArgNum)
            ins(List, fmt(
          [[    float %s = 0.0;]], Name))  
        end;
        ArgCheckFetch  = function(List, Name, ArgNum)
            ins(List, fmt(
          [[    %s = (float)luaL_checknumber(L, %u);]], Name, ArgNum))
        end;
        BaseInvocation = function(List, Name, ArgNum)
            ins(List, fmt(
              [[%s]], Name))
        end;
        PushRetVals    = function(List, Name, ArgNum)
        end;
        };
    ["float&"     ] = {
        General = {
            Direction = "out";
            LuaType   = "number"};
        VariableDefs   = function(List, Name, ArgNum)
            ins(List, fmt(
          [[    float %s = 0.0;]], Name))
        end;
        ArgCheckFetch  = function(List, Name, ArgNum)
        end;
        BaseInvocation = function(List, Name, ArgNum)
            ins(List, fmt(
              [[%s]], Name)) --Is this correct?
        end;
        PushRetVals    = function(List, Name, ArgNum)
            ins(List, fmt(
          [[    lua_pushnumber(L, (lua_Number)%s); NumRetVal += 1;]], Name))
        end;
        };
    ["int"        ] = {
        General = {
            Direction = "in";
            LuaType   = "integer"};
        VariableDefs   = function(List, Name, ArgNum, Argument)
            ins(List, fmt(
          [[    int %s = 0;]], Name))
        end;
        ArgCheckFetch  = function(List, Name, ArgNum, Argument)
            ins(List, fmt(
          [[    %s = luaL_checkint(L, %u);]], Name, ArgNum))
        end;
        BaseInvocation = function(List, Name, ArgNum, Argument)
            ins(List, fmt(
              [[%s]], Name))
        end;
        PushRetVals    = function(List, Name, ArgNum, Argument)
        end;
        };
    ["int|outstr_len"] = {
        General = {
            Direction = nil;};
        VariableDefs   = function(List, Name, ArgNum, Argument)
            ins(List, fmt(
          [[    const static int %s = %u;]], Name, temp_string_buffer_size))
        end;
        ArgCheckFetch  = function(List, Name, ArgNum, Argument)
        end;
        BaseInvocation = function(List, Name, ArgNum, Argument)
            ins(List, fmt(
              [[%s]], Name))
        end;
        PushRetVals    = function(List, Name, ArgNum, Argument)
        end;
    };
    ["int&"       ] = {
        General = {
            Direction = "out";
            LuaType   = "integer"};
        VariableDefs   = function(List, Name, ArgNum)
            ins(List, fmt(
          [[    int %s = 0;]], Name))
        end;
        ArgCheckFetch  = function(List, Name, ArgNum)
        end;
        BaseInvocation = function(List, Name, ArgNum)
            ins(List, fmt(
              [[%s]], Name)) --Is this correct?
        end;
        PushRetVals    = function(List, Name, ArgNum)
            ins(List, fmt(
          [[    lua_pushinteger(L, (lua_Integer)%s); NumRetVal += 1;]], Name))
        end;
        };
}


--[[Takes a string with table field references in it and returns a string where those references are
    replaced with their string representations. If no table is provided, defaults to the global environment.
    Syntax is:
    <$VariableName>
    ]]
function VarFmt(str, tbl)
    return str:gsub("%<%$[%w_]+%>", function(ref) return tostring((tbl or _G)[ref:sub(3,-2)]) end)
end

--These two functions only operate on the array part of a string
function ForEach(arr, func)
    for _, value in ipairs(arr) do
        func(value)
    end
end

function ForEachProperty(arr, prop, func)
    for _, object in ipairs(arr) do
        func(object[property])
    end
end


--[[=============================
    GENERATE FUNCTION DEFINITIONS
    =============================]]

do
local FuncDefTemplate = [[
<$Annotations>
<$RetType> <$FuncName> (lua_State* L) {
<$FuncBody>
};
]]

local FuncBodyDefTemplate = [[
<$VariableDefs>

<$ArgCheckFetch>

<$BaseInvocation>

<$PushRetVals>

<$ReturnStatement>]]

ForEach(AMX_Function_Declarations, function(Func)
    local FuncDefStringTable = {
        FuncName = base_to_lua_name_transform(Func.Name);
        RetType  = luac_function_return_type;
    }
    
    local FuncBodyDefStringTable = {
        ReturnStatement = [[
    return NumRetVal;]];
    }
    
    local AnnotationList    = {} --Array of lines/statements
    
    local VariableDefsList  = {} --Array of lines/statements
    local ArgCheckFetchList = {} --Array of lines/statements
    local BaseInvocationList= {} --Array of values to pass in a function call
    local PushRetValsList   = {} --Array of lines/statements
    
    --Do some default stuff that will always be there
    ins(VariableDefsList,[[
    int NumRetVal = 1;]])
    
    local InCount  = 0
    local OutCount = 0
    
    --===  ANNOTATION HANDLING  ===--
    ForEach(Func.Arguments, function(Argument)
        if Argument.OutStr then
            Argument.Type    = Argument.Type .. "|outstr"
            local LenArg     = Func.Arguments[Argument.OutStr]
            LenArg.Type      = LenArg.Type   .. "|outstr_len"
            LenArg.OutStrLen = Argument.Name
        end
    end)
    --===END ANNOTATION HANDLING===--
    
    ForEach(Func.Arguments, function(Argument)
        local Name, Type = Argument.Name, Argument.Type
        
        assert(types[Type], "This argument type '"..Type.."' hasn't been implemented yet.")
        local CdType = types[Type]
        
        local ArgNum
        if     CdType.General.Direction == "in" then
            InCount = InCount + 1
            ArgNum = InCount
        elseif CdType.General.Direction == "out" then
            OutCount = OutCount + 1
            ArgNum = OutCount
        end
        
        CdType.VariableDefs  (VariableDefsList,   Name, ArgNum, Argument)
        CdType.ArgCheckFetch (ArgCheckFetchList,  Name, ArgNum, Argument)
        CdType.BaseInvocation(BaseInvocationList, Name, ArgNum, Argument)
        CdType.PushRetVals   (PushRetValsList,    Name, ArgNum, Argument)
    end)
    
    --Emit lines of own annotations
    do  local ArgumentList, ReturnList = {}, {}
        ins(ReturnList, [[stdret :integer]])
        ForEach(Func.Arguments, function(Argument)
            local dir = types[Argument.Type].General.Direction
            if     dir == "in" then
                ins(ArgumentList, fmt([[%s :%s]], Argument.Name, types[Argument.Type].General.LuaType))
            elseif dir == "out" then
                ins(ReturnList, fmt([[%s :%s]], Argument.Name, types[Argument.Type].General.LuaType))
            end
        end)
        ins(AnnotationList, fmt(
            [[FUNC_PROTOTYPE "%s" --> %s ( %s ) %s]],
            FuncDefStringTable.FuncName,
            Func.Name,
            concat(ArgumentList, ", "),
            concat(ReturnList, ", ")))
    end
    
    FuncBodyDefStringTable.VariableDefs  = concat(VariableDefsList,  '\n')
    
    ins(ArgCheckFetchList, 1, fmt([[    lua_settop(L, %u);]], InCount))
    FuncBodyDefStringTable.ArgCheckFetch = concat(ArgCheckFetchList, '\n')
    
    FuncBodyDefStringTable.BaseInvocation = fmt(
      [[    lua_pushinteger(L, (lua_Integer)%s(%s));]],
        Func.Name,
        concat(BaseInvocationList, ", "))
    
    FuncBodyDefStringTable.PushRetVals   = concat(PushRetValsList,   '\n')
        if #FuncBodyDefStringTable.PushRetVals == 0 then
            FuncBodyDefStringTable.PushRetVals = [[    //No other values returned]]
        end
    
    FuncDefStringTable.FuncBody = VarFmt(FuncBodyDefTemplate, FuncBodyDefStringTable)
    
    for i,Annotation in ipairs(AnnotationList) do
        AnnotationList[i] = [[// ]] .. Annotation
    end
    FuncDefStringTable.Annotations = concat(AnnotationList, '\n')
    
    local FunctionDefinition = VarFmt(FuncDefTemplate, FuncDefStringTable)
    
    io.write(FunctionDefinition, "\n\n")
end)
end

--[[==========================
    STUFF FUNCTIONS INTO ARRAY
    ==========================]]
io.write(lual_reg_array_declaration, [[ = {
]])
local longest = 0
ForEach(AMX_Function_Declarations, function(Func)
    if #Func.Name > longest then longest = #Func.Name end
end)
ForEach(AMX_Function_Declarations, function(Func)
    io.write(fmt([[
    {%-]]..tostring(longest + 3)..[[s %s},
]], fmt('"%s",', Func.Name), base_to_lua_name_transform(Func.Name)))
end)
io.write([[
    {NULL, NULL}
};]])