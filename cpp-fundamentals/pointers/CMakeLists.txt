cmake_minimum_required(VERSION 3.7)
project(pointers)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp person.h person.cpp)
add_executable(pointers ${SOURCE_FILES})