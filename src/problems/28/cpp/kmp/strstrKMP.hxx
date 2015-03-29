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
        table.clear();

        if (needle[0] == '\0') {
            return;
        }

        table.push_back(-1);

        if (needle[1] == '\0') {
            return;
        }

        table.push_back(0);

        // Table constructing magic
        {
            index_t cnd{};

            for (char* str = needle + 2; *str != '\0';) {
                if (str[-1] == needle[cnd]) {
                    ++cnd;
                    table.push_back(cnd);
                    ++str;
                } else if (cnd > 0) {
                    cnd = table[cnd];
                } else {
                    table.push_back(0);
                    ++str;
                }
            }
        }
    }
};
