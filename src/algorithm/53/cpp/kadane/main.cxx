#include <iostream>
#include <stdlib.h>
#include "maxsum.hxx"

using namespace std;

int main(void) {
  Solution sol;
  int array[9] {-2,1,-3,4,-1,2,1,-5,4};

  cout << sol.maxSubArray(array, 9) << endl;

  return EXIT_SUCCESS;
}
