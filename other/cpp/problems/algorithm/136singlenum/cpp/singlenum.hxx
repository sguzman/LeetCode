#pragma once

class Solution {
public:
	int singleNumber(int A[], int n) {
		int num{};
		for (int i{}; i < n; (num ^= A[i]), ++i);

		return num;
	}
};
