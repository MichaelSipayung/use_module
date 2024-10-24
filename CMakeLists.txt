cmake_minimum_required(VERSION 3.29)
project(use_module CXX)
# set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD 20)

# module and submodules
add_library(my_math)
target_sources(my_math
    PUBLIC
    FILE_SET CXX_MODULES FILES
    my_math.cxx math_submodule1.cc math_submodule2.cc
)

add_executable(${PROJECT_NAME} main.cc)
add_executable(client2 client2.cc)
add_executable(client3 client3.cc)

target_link_libraries(${PROJECT_NAME} my_math)
target_link_libraries(client2 my_math)
target_link_libraries(client3 my_math)

# module partition
add_library(mathx)
target_sources(mathx
    PUBLIC
    FILE_SET CXX_MODULES FILES
    mathx.cc mathxpartition1.cc mathxpartition2.cc
)
add_executable(module_partition module_partition.cc)
target_link_libraries(module_partition mathx)
