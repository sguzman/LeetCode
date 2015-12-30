#include <iostream>
#include <cstdlib>
#include <array>
#include "excelnumber.hxx"

using namespace std;

int main(void) {
  Solution sol;
  std::array<std::string,5> list{{"A", "B", "C", "D", "AA"}};

  for (auto& i : list) {
    cout << sol.titleToNumber(i) << endl;
  }

  return EXIT_SUCCESS;
}
