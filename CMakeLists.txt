cmake_minimum_required(VERSION 3.20)

project(binary_file_inspector LANGUAGES CXX)

add_executable(binary-lab
    src/main.cpp
)

target_compile_features(binary-lab PRIVATE cxx_std_20)

if (CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(binary-lab PRIVATE
        -Wall
        -Wextra
        -Wpedantic
    )
elseif (MSVC)
    target_compile_options(binary-lab PRIVATE /W4)
endif()
