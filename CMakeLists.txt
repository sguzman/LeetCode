cmake_minimum_required(VERSION 3.1)
project(scratcpad2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")

add_executable(pascal src/118/cpp/main.cxx src/118/cpp/pascal.hxx)
