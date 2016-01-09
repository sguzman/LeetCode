#include <iostream>
#include "excelsheet.hxx"

using namespace std;

int main(void) {
  Solution sol;

  for (auto i = 0; i < 30; ++i) {
    cout << sol.convertToTitle(i) << endl;
  }

  return EXIT_SUCCESS;
}
