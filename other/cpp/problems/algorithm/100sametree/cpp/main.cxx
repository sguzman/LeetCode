//
// Created by Salvador on 3/22/2015.
//
#include <iostream>
#include <cstdlib>

#include "../../../../include/cpp/TreeNode.hxx"
#include "sametree.hxx"

using namespace std;

int main(void) {
	Solution sol;

	TreeNode p{5}, q{5};

	cout << sol.isSameTree(&p, &q) << endl;

	return EXIT_SUCCESS;
}
