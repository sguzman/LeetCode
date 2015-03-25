cmake_minimum_required(VERSION 3.1)
project(LeetCode)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")

# 28
add_executable(strstrNaive src/problems/28/cpp/naive/main.cxx src/problems/28/cpp/naive/strstr.hxx)
add_executable(strstrKMP src/problems/28/cpp/kmp/main.cxx src/problems/28/cpp/kmp/strstrKMP.hxx)

# 100
add_executable(sametree src/problems/100/cpp/main.cxx src/problems/100/cpp/sametree.hxx src/include/cpp/TreeNode.hxx)
add_executable(sametreec src/problems/100/c/main.c src/problems/100/c/sametree.h src/include/c/TreeNode.h)

# 104
add_executable(maxdepth src/problems/104/cpp/main.cxx src/problems/104/cpp/maxdepth.hxx src/include/cpp/TreeNode.hxx)
add_executable(maxdepthc src/problems/104/c/main.c src/problems/104/c/maxdepth.h src/include/c/TreeNode.h)

# 118
add_executable(pascal src/problems/118/cpp/main.cxx src/problems/118/cpp/pascal.hxx src/include/cpp/pretty_print.hxx)

# 136
add_executable(singlenumc src/problems/136/c/main.c src/problems/136/c/singlenum.h)
add_executable(singlenum src/problems/136/cpp/main.cxx src/problems/136/cpp/singlenum.hxx)

# 191
add_executable(number1bits src/problems/191/cpp/main.cxx src/problems/191/cpp/number1bits.hxx)
add_executable(number1bitsc src/problems/191/c/main.c src/problems/191/c/number1bits.h)
