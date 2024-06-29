cmake_minimum_required(VERSION 3.14)
project(genericProgramming)

set(src main.cpp)
set(flags "-g")
set_source_files_properties(${src} PROPERTIES COMPILE_FLAGS ${flags})
add_executable(main ${src})