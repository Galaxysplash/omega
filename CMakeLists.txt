cmake_minimum_required(VERSION 3.30)
project(omega)

set(CMAKE_CXX_STANDARD 20)

include_directories(main/include)

add_executable(
        ${PROJECT_NAME} main/src/main.cpp
        main/src/Lexer.cpp
        main/include/Lexer.h
        main/src/Files.cpp
        main/include/Filesystem.h
)
