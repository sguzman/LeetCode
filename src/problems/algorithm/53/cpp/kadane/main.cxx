#include <iostream>
#include <stdlib.h>
#include <vector>
#include "maxsum.hxx"
#include "../../../../../include/cpp/test.hxx"

using namespace std;

int main(void) {
  Solution sol;
  std::vector<int> array1{-2,1,-3,4,-1,2,1,-5,4};
  std::vector<int> array2{-1};
  std::vector<int> array3{1};

  Test::assertEquals<int>(6, sol.maxSubArray(array1));
  Test::assertEquals<int>(-1, sol.maxSubArray(array2));
  Test::assertEquals<int>(1, sol.maxSubArray(array3));

  return EXIT_SUCCESS;
}
