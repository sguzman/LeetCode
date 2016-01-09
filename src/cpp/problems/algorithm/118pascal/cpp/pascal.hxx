#pragma once

#include <vector>

using std::vector;

class Solution {
public:
	vector<vector<int>> generate(int nR) {
		unsigned long numRows{static_cast<unsigned long>(nR)};
		vector<vector<int>> final;

		if (numRows >= 1) {
			final.push_back(vector<int>{1});
		}

		for (unsigned long i = 1; i < numRows; ++i) {

			final.push_back(vector<int>{1});
			for (unsigned long j = 1; j < i; ++j) {
				final[i].push_back(final[i - 1][j - 1] + final[i - 1][j]);
			}

			final[i].push_back(1);
		}

		return final;
	}
};
