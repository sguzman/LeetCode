//
// Created by SGuzman on 3/19/2015.
//
#include <iostream>

#include "number1bits.hxx"

using namespace std;

int main(void) {
	Solution sol;

	for (uint32_t i = 0; i < 10; ++i) {
		cout << sol.hammingWeight(i) << endl;
	}

	return 0;
}
