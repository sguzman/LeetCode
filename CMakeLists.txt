cmake_minimum_required(VERSION 3.1)
project(LeetCode)

IF(EXISTS "/usr/bin/clang")
    set(CMAKE_CXX_COMPILER             "/usr/bin/clang++")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z")
    set(CMAKE_AR      "/usr/bin/llvm-ar")
    #set(CMAKE_LINKER  "/usr/bin/llvm-ld")
    set(CMAKE_NM      "/usr/bin/llvm-nm")
    set(CMAKE_OBJDUMP "/usr/bin/llvm-objdump")
    set(CMAKE_RANLIB  "/usr/bin/llvm-ranlib")
ELSE()
    set(CMAKE_CXX_COMPILER             "/usr/bin/g++")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
ENDIF()

# 1
add_executable(twosum src/problems/algorithm/1/cpp/twosum.cxx src/problems/algorithm/1/cpp/twosum.hxx src/problems/algorithm/1/cpp/gtest.hxx)
target_link_libraries(twosum gtest)

# 2
add_executable(addtwonumbers src/problems/algorithm/2/cpp/addtwonumbers.cxx src/problems/algorithm/2/cpp/addtwonumbers.hxx src/problems/algorithm/2/cpp/gtest.hxx src/include/cpp/LinkedList.hxx)
target_link_libraries(addtwonumbers gtest)

# 3
add_executable(longestsubstrworep src/problems/algorithm/3/cpp/longestsubstrworep.hxx src/problems/algorithm/3/cpp/longestsubstrworep.cxx src/problems/algorithm/3/cpp/gtest.hxx)
target_link_libraries(longestsubstrworep gtest)

# 28
add_executable(strstrHorspool src/problems/algorithm/28/cpp/horspool/main.cxx src/problems/algorithm/28/cpp/horspool/horspool.hxx)
add_executable(strstrKMP src/problems/algorithm/28/cpp/kmp/main.cxx src/problems/algorithm/28/cpp/kmp/strstrKMP.hxx)
add_executable(strstrNaive src/problems/algorithm/28/cpp/naive/main.cxx src/problems/algorithm/28/cpp/naive/strstr.hxx)
add_executable(strstrc src/problems/algorithm/28/c/kmp/main.c src/problems/algorithm/28/c/kmp/strstr.h)

# 53
add_executable(maxsum src/problems/algorithm/53/cpp/kadane/main.cxx src/problems/algorithm/53/cpp/kadane/maxsum.hxx src/include/cpp/test.hxx)

# 96
add_executable(uniquebst src/problems/algorithm/96/cpp/main.cxx src/problems/algorithm/96/cpp/uniquebst.hxx src/problems/algorithm/96/cpp/gtest.hxx)
target_link_libraries(uniquebst gtest)

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
