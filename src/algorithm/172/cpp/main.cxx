#include <iostream>
#include <cstdlib>
#include "trailingzeros.hxx"

using namespace std;

int main(void) {
  Solution sol;

  for (int i = 0; i < 20; ++i) {
    cout << sol.trailingZeroes(i) << endl;
  }

  return EXIT_SUCCESS;
}
