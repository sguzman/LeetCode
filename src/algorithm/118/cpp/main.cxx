#include <iostream>
#include <cstdlib>

#include "pascal.hxx"
#include "../../../include/pretty_print.hxx"

using namespace std;

int main(void) {
	Solution sol;

	for (int i = 0; i < 10; ++i) {
		cout << sol.generate(i) << endl;
	}

	return EXIT_SUCCESS;
}
