cmake_minimum_required(VERSION 3.1)
project(LeetCode)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")

# 28
add_executable(strstrNaive src/algorithm/28/cpp/naive/main.cxx src/algorithm/28/cpp/naive/strstr.hxx)
add_executable(strstrKMP src/algorithm/28/cpp/kmp/main.cxx src/algorithm/28/cpp/kmp/strstrKMP.hxx)
add_executable(strstrc src/algorithm/28/c/kmp/main.c src/algorithm/28/c/kmp/strstr.h)

# 100
add_executable(sametree src/algorithm/100/cpp/main.cxx src/algorithm/100/cpp/sametree.hxx src/include/cpp/TreeNode.hxx)
add_executable(sametreec src/algorithm/100/c/main.c src/algorithm/100/c/sametree.h src/include/c/TreeNode.h)

# 104
add_executable(maxdepth src/algorithm/104/cpp/main.cxx src/algorithm/104/cpp/maxdepth.hxx src/include/cpp/TreeNode.hxx)
add_executable(maxdepthc src/algorithm/104/c/main.c src/algorithm/104/c/maxdepth.h src/include/c/TreeNode.h)

# 118
add_executable(pascal src/algorithm/118/cpp/main.cxx src/algorithm/118/cpp/pascal.hxx src/include/cpp/pretty_print.hxx)

# 136
add_executable(singlenumc src/algorithm/136/c/main.c src/algorithm/136/c/singlenum.h)
add_executable(singlenum src/algorithm/136/cpp/main.cxx src/algorithm/136/cpp/singlenum.hxx)

# 168
add_executable(excelsheetcoltitle src/algorithm/168/cpp/main.cxx src/algorithm/168/cpp/excelsheet.hxx)

# 171
add_executable(excelsheetcolnumber src/algorithm/171/cpp/main.cxx src/algorithm/171/cpp/excelnumber.hxx)
add_executable(excelsheetcolnumberc src/algorithm/171/c/main.c src/algorithm/171/c/excelnumber.h)

# 172
add_executable(trailingzeros src/algorithm/172/cpp/main.cxx src/algorithm/172/cpp/trailingzeros.hxx)

# 191
add_executable(number1bits src/algorithm/191/cpp/main.cxx src/algorithm/191/cpp/number1bits.hxx)
add_executable(number1bitsc src/algorithm/191/c/main.c src/algorithm/191/c/number1bits.h)
