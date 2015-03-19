cmake_minimum_required(VERSION 3.1)
project(LeetCode)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")

add_executable(pascal src/118/cpp/main.cxx src/118/cpp/pascal.hxx src/include/pretty_print.hxx)

add_executable(number1bits src/191/cpp/main.cxx src/191/cpp/number1bits.hxx)
add_executable(number1bitsc src/191/c/main.c src/191/c/number1bits.h)
