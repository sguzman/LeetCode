//
// Created by SGuzman on 3/19/2015.
//
#include <iostream>

#include "singlenum.hxx"

using namespace std;

int main(void) {
	int nums[] = {1,2,3,4,5,6,7,8,1,2,3,4,5,6,7}, size = 15;

	Solution sol;
	cout << sol.singleNumber(nums, size) << endl;

	return 0;
}
