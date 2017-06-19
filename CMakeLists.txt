cmake_minimum_required(VERSION 3.7)
project(Library)

#project(Library)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Library.cpp Library.h Book.cpp Book.h Person.cpp Person.h)
add_executable(Library ${SOURCE_FILES})
