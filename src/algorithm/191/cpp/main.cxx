#include <iostream>
#include <cstdlib>

#include "number1bits.hxx"

using namespace std;

int main(void) {
	Solution sol;

	for (uint32_t i = 0; i < 10; ++i) {
		cout << sol.hammingWeight(i) << endl;
	}

	return EXIT_SUCCESS;
}
