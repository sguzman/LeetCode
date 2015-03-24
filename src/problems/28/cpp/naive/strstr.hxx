#pragma once

class Solution {
public:
    int strStr(char* haystack, char* needle) {
        if (*haystack == '\0' && *needle == '\0') {
            return 0;
        }

        int idx;

        for (int i = 0; haystack[i] != '\0'; ++i) {
            if (haystack[i] == needle[0]) {

                for (idx = 0; needle[idx] != '\0'; ++idx) {
                    if (haystack[i + idx] != needle[idx]) {
                        idx = -1;
                        break;
                    }
                }

                if (idx != -1) {
                    return idx;
                }
            }
        }

        return -1;
    }
};
