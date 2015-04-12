#include <iostream>
#include "rotatearray.hxx"

using namespace std;

int main(void) {
  int array[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  Solution sol;
  sol.rotate(array, 10, 5);

  for (int i = 0; i < 10; ++i) {
    cout << " " << array[i] << endl;
  }
}
