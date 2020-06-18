# Dan_SAMP
(Archive) A generated Lua binding for San Andreas Multiplayer.

This code was written in 2013 to help a friend. I don't fully understand the original architecture, but my understanding was:

SAMP was written in C/C++
It uses Pawn as its scripting API
Someone else had written a C/C++ wrapper around that, which I think is in `function.cpp`

What my code does is:
`function_mapping.lua` (99 lines, Lua 5.2) takes `function.cpp` (86,683 lines) on `stdin`, parses all of the declarations, and outputs a bunch of Lua code (3,053 lines, saved in `function_mapping_out.lua`)

When that code is executed, it fills-in a global variable `AMX_Function_Declarations`. The file `c_func_gen.lua` (352 lines), when it executes, looks for this global variable, processes the data therein, and generates a bunch of C/C++ code (6,367 lines, saved in `luac_mapping.cpp`) which is the source code of a Lua 5.1 binary module that exposes all of the Pawn-API functions of San Andreas Multiplayer. The source code requires further hand-editing to be usable, as I recall (it has no `luaopen_` function, for instance) but that was performed by my friend, who was more familiar with SAMP interfacing.

Performing all of those operations is done by executing `regen.bat`, which will call the right programs with the right arguments and the correct redirections.