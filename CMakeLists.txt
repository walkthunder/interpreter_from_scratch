cmake_minimum_required(VERSION 3.12)
project(clox C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(clox
        chunk.c
        chunk.h
        common.h
        debug.c
        debug.h
        main.c
        memory.c
        memory.h value.h value.c vm.c vm.h)
