#include <iostream>
#include <cstdlib>
#include "reversebits.hxx"

using namespace std;

int main(void) {
  Solution sol;

  for (uint32_t i = 0; i < 20; ++i) {
    cout << sol.reverseBits(i) << endl;
  }

  return EXIT_SUCCESS;
}
