cmake_minimum_required(VERSION 3.7)
project(Library)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Library.cpp Library.h Movie.cpp Movie.h Book.cpp Book.h Position.cpp Position.h Customer.cpp Customer.h)
add_executable(Library ${SOURCE_FILES})