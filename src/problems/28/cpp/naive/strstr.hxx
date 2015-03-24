#pragma once

class Solution {
public:
    int strStr(char* haystack, char* needle) {
        for (int i = 0; haystack[i] != '\0'; ++i) {
                for (int j = 0; haystack[i + j] != '\0' && haystack[i + j] == needle[j]; ++j) {
                    if (needle[j + 1] == '\0') {
                        return i;
                    }
                }
        }

        return -1;
    }
};
