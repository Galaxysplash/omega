cmake_minimum_required(VERSION 3.30)
project(omega)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SOURCES "code/*.cpp")

add_subdirectory(code/main)
add_subdirectory(code/lexer)
add_subdirectory(code/parser)
add_subdirectory(code/tokens)

add_executable(
        ${PROJECT_NAME} ${SOURCES}
)
