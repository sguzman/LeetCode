#include <iostream>
#include <stdlib.h>
#include "maxsum.hxx"
#include "../../../../include/cpp/test.hxx"

using namespace std;

int main(void) {
  Solution sol;
  int array[9] {-2,1,-3,4,-1,2,1,-5,4};

  int actual = sol.maxSubArray(array, 9) + 1;
  int expected = 6;

  Test::assertEquals(expected, actual);

  return EXIT_SUCCESS;
}
