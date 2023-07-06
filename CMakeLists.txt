cmake_minimum_required(VERSION 3.25)
project(Ani)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Ani
        Ani.ino
        walk.h)
