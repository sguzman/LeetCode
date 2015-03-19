cmake_minimum_required(VERSION 3.1)
project(LeetCode)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")

# 118
add_executable(pascal src/problems/118/cpp/main.cxx src/problems/118/cpp/pascal.hxx src/include/pretty_print.hxx)

# 136
add_executable(singlenumc src/problems/136/c/main.c src/problems/136/c/singlenum.h)

# 191
add_executable(number1bits src/problems/191/cpp/main.cxx src/problems/191/cpp/number1bits.hxx)
add_executable(number1bitsc src/problems/191/c/main.c src/problems/191/c/number1bits.h)
