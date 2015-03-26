#pragma once

#include <cstring>
#include <vector>

using std::vector;

class Solution {
public:
    int strStr(char* haystack, char* needle) {
        auto haySZ = strlen(haystack);
        auto neeSZ = strlen(needle);

        vector<int> overlap;
        buildOverlapTable(needle, neeSZ, overlap);
    }

private:
    void buildOverlapTable(char* neeedle, size_t sz, vector<int>& table) {
        table.push_back(0);
        --sz;

        for (int i = 0; i < sz; ++i) {
            char ch = neeedle[i + 1];
            int overlap = table[i];

            for (; overlap != 0 && neeedle[i + 1] != ch; overlap = table[overlap]);

            if (neeedle[i + 1] == ch) {
                table.push_back(overlap + 1);
            } else {
                table.push_back(0);
            }
        }
    }
};
