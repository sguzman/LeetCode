#pragma once

#include <cstring>
#include <vector>
#include <iostream>

#include "../../../../include/cpp/pretty_print.hxx"

using std::vector;
using std::cout;
using std::endl;

class Solution {
public:
    int strStr(char* T, char* P) {
        vector<int> overlap;
        buildOverlapTable(P, overlap);

        cout << overlap << endl;

        return -1;
    }

private:
    void buildOverlapTable(char*needle, vector<int>& table) {
        table.clear();
        table.push_back(0);

        int prefix{};

        for (char* ptr = needle + 1; *ptr != '\0'; ++ptr) {
            while (prefix && needle[prefix] != *ptr) {
                prefix = table[prefix - 1];
            }

            if (*ptr == needle[prefix]) {
                ++prefix;
            }

            table.push_back(prefix);
        }
    }
};
