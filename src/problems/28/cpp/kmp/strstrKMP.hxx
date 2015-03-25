#pragma once

class Solution {
public:
    int strStr(char* haystack, char* needle) {
        int m, n, j;
        for (m = n = 0; haystack[m] != '\0'; m += n) {
            if (haystack[m] == needle[0]) {
                for ((j = n), n = 0; haystack[m + j] != '\0' && needle[j] != '\0' && haystack[m + j] == needle[j]; ++j) {
                    if (j > n) {
                        if (haystack[m + j] == needle[n]) {
                            ++n;
                        } else {
                            n = 0;
                        }
                    }
                }

                if (needle[j] == '\0') {
                    return m;
                }

                if (n == 0) {
                    n = j;
                }

            }
        }

        return -1;
    }
};
