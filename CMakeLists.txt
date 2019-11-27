cmake_minimum_required( VERSION 2.8 )

set(CMAKE_C_FLAGS  "${CMAKE_C_FLAGS} -std=c99")

project( df-allocator )

add_library( memlib memlib.c )

add_library( mm mm.c )

add_executable(test test.c)
target_link_libraries(test memlib)
target_link_libraries(test mm)