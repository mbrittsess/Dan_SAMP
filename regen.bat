lua52 function_mapping.lua < function.cpp > function_mapping_out.lua
lua52 -e "dofile 'function_mapping_out.lua'" c_func_gen.lua > luac_mapping.cpp