#include <iostream>
#include <stdlib.h>

#include "strstrKMP.hxx"

using namespace std;

static Solution sol;

static inline void testCase(char* haystack, char* needle, int expected) {
    auto ret = sol.strStr(haystack, needle);
    if (ret == expected) {
        cout << "SUCCESS: " << endl;
    } else {
        cout << "FAILURE: " << endl;
    }

    cout << "\tHaystack: " << haystack << endl;
    cout << "\tNeedle: " << needle << endl;

    cout << "\tResult: " << ret << endl << endl;
}

static inline void test1(void) {
    char haystack1[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
    char needle1[] = "ab";

    testCase(haystack1, needle1, 42);
}

static inline void test2(void) {
    char haystack1[] = "THIS IS A TEST TEXT";
    char needle1[] = "TEST";

    testCase(haystack1, needle1, 10);
}

static inline void test3(void) {
    char haystack1[] = "AABAACAADAABAAABAA";
    char needle1[] = "AABA";

    testCase(haystack1, needle1, 0);
}

static inline void test4(void) {
    char haystack1[] = "AABAACAADAABAAABAA";
    char needle1[] = "AABAABAB";

    testCase(haystack1, needle1, -1);
}

static inline void test(void) {
    test1();
    test2();
    test3();
    test4();
}

int main(void) {
    test();

    return EXIT_SUCCESS;
}

