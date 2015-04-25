cmake_minimum_required(VERSION 3.1)
project(LeetCode)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")

# 28
add_executable(strstrHorspool src/problems/algorithm/28/cpp/horspool/main.cxx src/problems/algorithm/28/cpp/horspool/horspool.hxx)
add_executable(strstrKMP src/problems/algorithm/28/cpp/kmp/main.cxx src/problems/algorithm/28/cpp/kmp/strstrKMP.hxx)
add_executable(strstrNaive src/problems/algorithm/28/cpp/naive/main.cxx src/problems/algorithm/28/cpp/naive/strstr.hxx)
add_executable(strstrc src/problems/algorithm/28/c/kmp/main.c src/problems/algorithm/28/c/kmp/strstr.h)

# 53
add_executable(maxsum src/problems/algorithm/53/cpp/kadane/main.cxx src/problems/algorithm/53/cpp/kadane/maxsum.hxx src/include/cpp/test.hxx)

# 100
add_executable(sametree src/problems/algorithm/100/cpp/main.cxx src/problems/algorithm/100/cpp/sametree.hxx src/include/cpp/TreeNode.hxx)
add_executable(sametreec src/problems/algorithm/100/c/main.c src/problems/algorithm/100/c/sametree.h src/include/c/TreeNode.h)

# 104
add_executable(maxdepth src/problems/algorithm/104/cpp/main.cxx src/problems/algorithm/104/cpp/maxdepth.hxx src/include/cpp/TreeNode.hxx)
add_executable(maxdepthc src/problems/algorithm/104/c/main.c src/problems/algorithm/104/c/maxdepth.h src/include/c/TreeNode.h)

# 118
add_executable(pascal src/problems/algorithm/118/cpp/main.cxx src/problems/algorithm/118/cpp/pascal.hxx src/include/cpp/pretty_print.hxx)

# 136
add_executable(singlenumc src/problems/algorithm/136/c/main.c src/problems/algorithm/136/c/singlenum.h)
add_executable(singlenum src/problems/algorithm/136/cpp/main.cxx src/problems/algorithm/136/cpp/singlenum.hxx)

# 168
add_executable(excelsheetcoltitle src/problems/algorithm/168/cpp/main.cxx src/problems/algorithm/168/cpp/excelsheet.hxx)

# 169
add_executable(majorityelement src/problems/algorithm/169/cpp/main.cxx src/problems/algorithm/169/cpp/majorityelement.hxx)
add_executable(majorityelementc src/problems/algorithm/169/c/main.c src/problems/algorithm/169/c/majorityelement.h)

# 171
add_executable(excelsheetcolnumber src/problems/algorithm/171/cpp/main.cxx src/problems/algorithm/171/cpp/excelnumber.hxx)
add_executable(excelsheetcolnumberc src/problems/algorithm/171/c/main.c src/problems/algorithm/171/c/excelnumber.h)

# 172
add_executable(trailingzeros src/problems/algorithm/172/cpp/main.cxx src/problems/algorithm/172/cpp/trailingzeros.hxx)
add_executable(trailingzerosc src/problems/algorithm/172/c/main.c src/problems/algorithm/172/c/trailingzeros.h)

# 189
add_executable(rotatearray src/problems/algorithm/189/cpp/main.cxx src/problems/algorithm/189/cpp/rotatearray.hxx)

# 190
add_executable(reversebits src/problems/algorithm/190/cpp/main.cxx src/problems/algorithm/190/cpp/reversebits.hxx)
add_executable(reversebitsc src/problems/algorithm/190/c/main.c src/problems/algorithm/190/c/reversebits.h)

# 191
add_executable(number1bits src/problems/algorithm/191/cpp/main.cxx src/problems/algorithm/191/cpp/number1bits.hxx)
add_executable(number1bitsc src/problems/algorithm/191/c/main.c src/problems/algorithm/191/c/number1bits.h)
