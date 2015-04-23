#include <iostream>
#include <cstdlib>
#include <vector>
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

  std::string haystack5{"mississippi"};
  std::string needle5{"issipi"};

  std::vector<int> haystack{42, 10, 0, -1};
  std::vector<int> needle{sol.strStr(haystack1, needle1),
                            sol.strStr(haystack2, needle2),
                            sol.strStr(haystack3, needle3),
                            sol.strStr(haystack4, needle4),
                            sol.strStr(haystack5, needle5)};

  Test::assertEquals<int, std::vector, std::vector>(haystack, needle);

  return EXIT_SUCCESS;
}
