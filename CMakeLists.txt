cmake_minimum_required(VERSION 3.14)
project(cpp_zoo_ShiraZaltsman)

set(CMAKE_CXX_STANDARD 98)

add_executable(cpp_zoo_ShiraZaltsman main.cpp animal.cpp animal.h mammals.h fish.h bird.h fish.cpp bird.cpp mammals.cpp zoo.cpp zoo.h)