cmake_minimum_required(VERSION 3.20)
project(omega)

include_directories(code)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE SOURCES "code/*.cpp")


add_executable(
        ${PROJECT_NAME} ${SOURCES}
        code/memory/BufferSize.h
)
