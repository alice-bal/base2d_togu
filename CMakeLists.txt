cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 17)
project(b2d)
add_executable(b2d "")
target_include_directories(b2d PRIVATE include)
target_sources(b2d PRIVATE
    src/main.cpp
    src/2dprimitive.cpp
    src/point2d.cpp
    src/circle2d.cpp
    src/line2d.cpp
)