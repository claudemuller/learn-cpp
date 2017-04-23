cmake_minimum_required(VERSION 3.6)
project(classes-and-objects)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp person.cpp person.h tweeter.cpp tweeter.h status.h)
add_executable(classes-and-objects ${SOURCE_FILES})