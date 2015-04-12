#include <iostream>
#include <cstdlib>
#include <vector>
#include "majorityelement.hxx"

using namespace std;

int main(void) {
  Solution sol;
  std::vector<int> list {1, 2, 3, 4, 5, 5, 5, 5};

  cout << sol.majorityElement(list) << endl;

  return EXIT_SUCCESS;
}
