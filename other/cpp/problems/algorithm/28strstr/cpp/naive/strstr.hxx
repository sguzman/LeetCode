#pragma once

class Solution {
public:
    int strStr(char* haystack, char* needle) {
        int idxHay, idxNee;
        for (idxHay = 0; haystack[idxHay] != '\0'; ++idxHay) {
                // Empty For loop
                for (idxNee = 0; haystack[idxHay + idxNee] != '\0' && needle[idxNee] != '\0' && haystack[idxHay + idxNee] == needle[idxNee]; ++idxNee)
                  ;
                    if (needle[idxNee] == '\0') {
                        return idxHay;
                    }
        }

        return -1;
    }
};
