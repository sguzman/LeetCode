#include <iostream>
#include <cstdlib>
#include <vector>
#include "uniquebst.hxx"
#include "../../../../include/cpp/test.hxx"

using namespace std;

int main(void) {
  Solution sol;
  auto process = [&sol] (int n) { return sol.numTrees(n);};

  vector<int> args{1, 2, 3, 4, 5, 6, 7};
  Test::map<vector,int,decltype(process)>(args, process);
  vector<int> expected{1, 2, 5, 14, 42, 132, 429};

  Test::assertEquals<int,vector,vector>(args, expected);

  return EXIT_SUCCESS;
}
