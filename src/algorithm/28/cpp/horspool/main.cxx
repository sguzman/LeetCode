#include <iostream>
#include <cstdlib>
#include "../../../../include/cpp/test.hxx"
#include "horspool.hxx"

using namespace std;

int main(void) {
  Solution sol;

  std::string haystack1{"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab"};
  std::string needle1{"ab"};

  std::string haystack2{"THIS IS A TEST TEXT"};
  std::string needle2{"TEST"};

  std::string haystack3{"AABAACAADAABAAABAA"};
  std::string needle3{"AABA"};

  std::string haystack4{"AABAACAADAABAAABAA"};
  std::string needle4{"AABAABAB"};

  Test::assertEquals<int>(42, sol.strStr(haystack1, needle1));
  Test::assertEquals<int>(10, sol.strStr(haystack2, needle2));
  Test::assertEquals<int>(0, sol.strStr(haystack3, needle3));
  Test::assertEquals<int>(-1, sol.strStr(haystack4, needle4));

  return EXIT_SUCCESS;
}
