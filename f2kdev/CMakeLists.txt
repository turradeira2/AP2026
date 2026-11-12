cmake_minimum_required(VERSION 3.10)

project(f2kdev LANGUAGES C)

add_executable(f2kdev main.c)

install(TARGETS f2kdev RUNTIME DESTINATION bin)
