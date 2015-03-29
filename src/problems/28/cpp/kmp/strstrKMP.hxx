#pragma once

#include <vector>
#include <cstring>

class Solution {
public:
    using vector = std::vector<int>;

    int strStr(char* haystack, char* needle) {
        {
            if (haystack[0] == '\0' || needle[0] == '\0') {
                if (needle[0] == '\0') {
                    return 0;
                }

                return -1;
            }
        }

        vector overlap;
        buildOverlapTable(needle, overlap);

        const auto length = strlen(haystack), end = overlap.size() - 1;

        for (int m{}, i{}; m + i < length;) {
            if (needle[i] == haystack[m + i]) {
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
