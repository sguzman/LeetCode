#pragma once

#include <vector>
#include <cstring>

using std::cout;
using std::endl;

class Solution {
public:
    using vector = std::vector<int>;

    int strStr(char* T, char* P) {
        vector overlap;
        buildOverlapTable(P, overlap);

        const auto length = strlen(T), end = overlap.size() - 1;

        for (int m{}, i{}; m + i < length;) {
            if (P[i] == T[m + i]) {
                if (i == end) {
                    return m;
                }
                ++i;
            } else {
                if (overlap[i] > -1) {
                    m += i - overlap[i];
                    i = overlap[i];
                } else {
                    i = 0;
                    ++m;
                }
            }
        }

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
            int cnd{};

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
