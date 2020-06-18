assert(_VERSION == "Lua 5.2", "Please run this with Lua 5.2")
local ins = table.insert

FunctionDeclarationLines = {} --Contains the original lines of the declarations
FunctionDeclarations     = {} --Contains the semantics of the declared lines, indexed by order and name

--for line in io.lines([[function.cpp]]) do
for line in io.lines() do
    if line:match("^int ") then
        ins(FunctionDeclarationLines, line)
    end
end

for _, line in ipairs(FunctionDeclarationLines) do
    local FuncDecl = {}; table.insert(FunctionDeclarations, FuncDecl)
    
    local ReturnType, Name, RestOfLine = line:match("^(%g+%s+[^%s%w%_]*)([%w%_]+)(.*)$")
    local PostArguments = RestOfLine:match("%b()(.*)$") --Matches anything past the arguments
    
    FuncDecl.ReturnType = ReturnType:gsub(' ', '')
    FuncDecl.Name       = Name
    FuncDecl.Args       = {}
    
    --Match any group of non-commas within the parentheses-enclosed text
    for BaseArgument in RestOfLine:match("%b()"):sub(2,-2):gmatch("([^%,]+)") do
        local Tokens = {[0]=""} --The [0] is for paperwork purposes
        for Token in BaseArgument:gmatch("(%S+)") do --All groups of non-space characters
            ins(Tokens, Token)
        end
        
        --Put type-modifiers with the appropriate part
        for i, CurrToken in ipairs(Tokens) do
            local prefix, proper = CurrToken:match("^([^%w%_]*)(%g*)$") --In "&rotX", '&' would be the prefix and 'rotX' would be the proper
            Tokens[i-1], Tokens[i] = Tokens[i-1] .. prefix, proper
        end
        
        local ArgData = {
            Type = table.concat(Tokens, ' ', 1, #Tokens - 1);
            Name = Tokens[#Tokens]}
        
        ins(FuncDecl.Args, ArgData)
        FuncDecl.Args[ArgData.Name] = ArgData
    end
    
    --Check to see if there are any annotations
    local Annotation = PostArguments:match("//INFEC_ANNOTATE (.*)$")
    if Annotation then
        for Note in Annotation:gmatch("%b()") do
            local NoteData = {}; for NoteToken in Note:sub(2,-2):gmatch("[^%:]+") do ins(NoteData, NoteToken) end
            if NoteData[1] == "outstr" then --This is the only supported one at the moment
                assert(FuncDecl.Args[NoteData[2]] and FuncDecl.Args[NoteData[3]],
                    string.format([[Bad annotation, mentions arguments '%s' and '%s', but they aren't found in function '%s']],
                        NoteData[2], NoteData[3], Name))
                FuncDecl.Args[NoteData[2]].OutStr = NoteData[3]
            end
        end
    end
end

--Now to serialize table 'FunctionDeclarations'
io.write("AMX_Function_Declarations = {\n")
for _, Func in ipairs(FunctionDeclarations) do
    io.write(string.format([=[
   {Name       = [[%s]];
    ReturnType = [[%s]];
    Arguments  = {
]=],
    Func.Name,
    Func.ReturnType))
    
    local ArgsEntries = {}
    for _, Argument in ipairs(Func.Args) do
        local Serialized = string.format([=[
       {Name = [[%s]],
        Type = [[%s]]]=],
        Argument.Name,
        Argument.Type)
        
        if Argument.OutStr then
            Serialized = Serialized .. string.format([=[,
        OutStr = [[%s]]]=],
            Argument.OutStr)
        end
        
        Serialized = Serialized .. '}'
        ins(ArgsEntries, Serialized)
    end
    
    io.write(table.concat(ArgsEntries, ",\n"), "}};\n\n")
end
io.write([[
}

for _, Func in ipairs(AMX_Function_Declarations) do
    AMX_Function_Declarations[Func.Name] = Func
    for _, Arg in ipairs(Func.Arguments) do
        Func.Arguments[Arg.Name] = Arg
    end
end]])