cmake_minimum_required(VERSION 3.20)
project(helloworld LANGUAGES CXX)

# Require standard C++20 and disable compiler-specific language extensions.
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(helloworld
    main.cpp
    parse.cpp
)

target_compile_options(helloworld PRIVATE
    $<$<CXX_COMPILER_ID:GNU,Clang>:-Wall;-Wextra;-Wpedantic>
)
