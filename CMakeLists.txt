cmake_minimum_required(VERSION 3.1)
project(LeetCode)

IF(EXISTS "/usr/bin/clang")
    set(CMAKE_CXX_COMPILER             "/usr/bin/clang++")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1z -stdlib=libc++")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS} -Wall -g -O -Weverything -pedantic -pedantic-errors -Wno-c++98-compat -Wno-c++98-compat-pedantic")
    #set(CMAKE_AR      "/usr/bin/llvm-ar")
    #set(CMAKE_LINKER  "/usr/bin/llvm-ld")
    #set(CMAKE_NM      "/usr/bin/llvm-nm")
    #set(CMAKE_OBJDUMP "/usr/bin/llvm-objdump")
    #set(CMAKE_RANLIB  "/usr/bin/llvm-ranlib")
ELSE()
    set(CMAKE_CXX_COMPILER             "/usr/bin/g++")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
ENDIF()

# Clean cmake files
add_custom_target(
        cclean
        COMMAND rm CMakeCache.txt
        COMMAND rm -r CMakeFiles
        COMMAND rm cmake_install.cmake
        COMMAND rm Makefile
        COMMENT "Clean up cmake specific files"
        VERBATIM
)

# 1
add_executable(1twosum src/problems/algorithm/1twosum/cpp/twosum.cxx src/problems/algorithm/1twosum/cpp/twosum.hxx src/problems/algorithm/1twosum/cpp/gtest.hxx)
target_link_libraries(1twosum gtest)

# 2
add_executable(2addtwonumbers src/problems/algorithm/2addtwonumbers/cpp/addtwonumbers.cxx src/problems/algorithm/2addtwonumbers/cpp/addtwonumbers.hxx src/problems/algorithm/2addtwonumbers/cpp/gtest.hxx src/include/cpp/LinkedList.hxx)
target_link_libraries(2addtwonumbers gtest)

# 3
add_executable(3longestsubstrworep src/problems/algorithm/3longestsubstrworep/cpp/longestsubstrworep.hxx src/problems/algorithm/3longestsubstrworep/cpp/longestsubstrworep.cxx src/problems/algorithm/3longestsubstrworep/cpp/gtest.hxx)
target_link_libraries(3longestsubstrworep gtest)

# 4
file(GLOB MEDIAN4 src/problems/algorithm/4mediantwosortarrays/cpp/*xx)
add_executable(4mediantwosortarrays ${MEDIAN4})
target_link_libraries(4mediantwosortarrays gtest)

# 5
file(GLOB LONGPALINSUBH src/problems/algorithm/5longestpalindromesub/cpp/*xx)
add_executable(5longestpalindromesub ${LONGPALINSUBH})
target_link_libraries(5longestpalindromesub gtest)

# 28
add_executable(28strstrHorspool src/problems/algorithm/28strstr/cpp/horspool/main.cxx src/problems/algorithm/28strstr/cpp/horspool/horspool.hxx)
add_executable(28strstrKMP src/problems/algorithm/28strstr/cpp/kmp/main.cxx src/problems/algorithm/28strstr/cpp/kmp/strstrKMP.hxx)
add_executable(28strstrNaive src/problems/algorithm/28strstr/cpp/naive/main.cxx src/problems/algorithm/28strstr/cpp/naive/strstr.hxx)
add_executable(28strstrc src/problems/algorithm/28strstr/c/kmp/main.c src/problems/algorithm/28strstr/c/kmp/strstr.h)

# 53
add_executable(53maxsum src/problems/algorithm/53maxsum/cpp/kadane/main.cxx src/problems/algorithm/53maxsum/cpp/kadane/maxsum.hxx src/include/cpp/test.hxx)

# 96
add_executable(96uniquebst src/problems/algorithm/96uniquebst/cpp/main.cxx src/problems/algorithm/96uniquebst/cpp/uniquebst.hxx src/problems/algorithm/96uniquebst/cpp/gtest.hxx)
target_link_libraries(96uniquebst gtest)

# 100
add_executable(100sametree src/problems/algorithm/100sametree/cpp/main.cxx src/problems/algorithm/100sametree/cpp/sametree.hxx src/include/cpp/TreeNode.hxx)
add_executable(100sametreec src/problems/algorithm/100sametree/c/main.c src/problems/algorithm/100sametree/c/sametree.h src/include/c/TreeNode.h)

# 104
add_executable(104maxdepth src/problems/algorithm/104maxdepth/cpp/main.cxx src/problems/algorithm/104maxdepth/cpp/maxdepth.hxx src/include/cpp/TreeNode.hxx)
add_executable(104maxdepthc src/problems/algorithm/104maxdepth/c/main.c src/problems/algorithm/104maxdepth/c/maxdepth.h src/include/c/TreeNode.h)

# 118
add_executable(118pascal src/problems/algorithm/118pascal/cpp/main.cxx src/problems/algorithm/118pascal/cpp/pascal.hxx src/include/cpp/pretty_print.hxx)

# 136
add_executable(136singlenumc src/problems/algorithm/136singlenum/c/main.c src/problems/algorithm/136singlenum/c/singlenum.h)
add_executable(136singlenum src/problems/algorithm/136singlenum/cpp/main.cxx src/problems/algorithm/136singlenum/cpp/singlenum.hxx)

# 168
add_executable(168excelsheetcoltitle src/problems/algorithm/168excelsheetcoltitle/cpp/main.cxx src/problems/algorithm/168excelsheetcoltitle/cpp/excelsheet.hxx)

# 169
add_executable(169majorityelement src/problems/algorithm/169majorityelement/cpp/main.cxx src/problems/algorithm/169majorityelement/cpp/majorityelement.hxx)
add_executable(169majorityelementc src/problems/algorithm/169majorityelement/c/main.c src/problems/algorithm/169majorityelement/c/majorityelement.h)

# 171
add_executable(171excelsheetcolnumber src/problems/algorithm/171excelsheetcolnumber/cpp/main.cxx src/problems/algorithm/171excelsheetcolnumber/cpp/excelnumber.hxx)
add_executable(171excelsheetcolnumberc src/problems/algorithm/171excelsheetcolnumber/c/main.c src/problems/algorithm/171excelsheetcolnumber/c/excelnumber.h)

# 172
add_executable(172trailingzeros src/problems/algorithm/172trailingzeros/cpp/main.cxx src/problems/algorithm/172trailingzeros/cpp/trailingzeros.hxx)
add_executable(172trailingzerosc src/problems/algorithm/172trailingzeros/c/main.c src/problems/algorithm/172trailingzeros/c/trailingzeros.h)

# 189
add_executable(189rotatearray src/problems/algorithm/189rotatearray/cpp/main.cxx src/problems/algorithm/189rotatearray/cpp/rotatearray.hxx)

# 190
add_executable(190reversebits src/problems/algorithm/190reversebits/cpp/main.cxx src/problems/algorithm/190reversebits/cpp/reversebits.hxx)
add_executable(190reversebitsc src/problems/algorithm/190reversebits/c/main.c src/problems/algorithm/190reversebits/c/reversebits.h)

# 191
add_executable(191number1bits src/problems/algorithm/191number1bits/cpp/main.cxx src/problems/algorithm/191number1bits/cpp/number1bits.hxx)
add_executable(191number1bitsc src/problems/algorithm/191number1bits/c/main.c src/problems/algorithm/191number1bits/c/number1bits.h)
