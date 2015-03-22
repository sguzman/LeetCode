//
// Created by SGuzman on 3/19/2015.
//
#include <iostream>

#include "pascal.hxx"
#include "../../../include/pretty_print.hxx"

using namespace std;

int main(void) {
	Solution sol;

	for (int i = 0; i < 10; ++i) {
		cout << sol.generate(i) << endl;
	}

	return 0;
}
