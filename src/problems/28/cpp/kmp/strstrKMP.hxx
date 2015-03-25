#pragma once

class Solution {
public:
    int strStr(char* haystack, char* needle) {
        int m, n;
        for (m = 0, n = 0; haystack[m] != '\0'; ++m) {
            if (haystack[m] == needle[0]) {
                for (n = 0; haystack[m + n] != '\0' && needle[n] != '\0' && haystack[m + n] == needle[n]; ++n);

                if (needle[n] == '\0') {
                    return m;
                }
            }
        }

        return -1;
    }
};
