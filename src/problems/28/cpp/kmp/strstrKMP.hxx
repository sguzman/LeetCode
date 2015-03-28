#pragma once

#include <cstring>
#include <vector>
#include <iostream>

#include "../../../../include/cpp/pretty_print.hxx"

using std::cout;
using std::endl;

class Solution {
public:
    using index_t = int;
    using vector = std::vector<index_t>;

    int strStr(char* T, char* P) {
        vector overlap;
        buildOverlapTable(P, overlap);

        cout << overlap << endl;

        return -1;
    }

private:
    void buildOverlapTable(char* needle, vector& table) {
        const auto strLen = strlen(needle);
        table.clear();

        if (strLen == 0) {
            return;
        }

        table.reserve(strLen);
        table.push_back(-1);

        if (strLen <= 1) {
            return;
        }

        table.push_back(0);

        index_t pos = 2, cnd = 0;

        while (pos < strLen) {
            if (needle[pos - 1] == needle[cnd]) {
                ++cnd;
                table.push_back(cnd);
                ++pos;
            } else if (cnd > 0) {
                cnd = table[cnd];
            } else {
                table.push_back(0);
                ++pos;
            }
        }
    }
};
