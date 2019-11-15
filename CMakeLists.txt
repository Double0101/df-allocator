cmake_minimum_required( VERSION 2.8 )

project( df-allocator )

add_library( memlib memlib.c )

add_library( mm mm.c )

add_executable(test test.c)