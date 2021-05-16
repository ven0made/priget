cmake_minimum_required(VERSION 3.19)
project(priget)

set(CMAKE_CXX_STANDARD 14)

add_executable(priget main.cpp split.cpp split.h config.cpp config.h)

add_subdirectory(deps/sleepy-discord)
target_link_libraries(priget sleepy-discord)