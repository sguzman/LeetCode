#include <iostream>
#include <stdlib.h>

#include "strstr.hxx"

using namespace std;

int main(void) {
    Solution sol;

    char haystack[] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaab";
    char needle[] = "ab";

    cout << "Haystack: " << haystack << endl;
    cout << "Needle: " << needle << endl;

    cout << "Result: " << sol.strStr(haystack, needle) << endl;

    return EXIT_SUCCESS;
}
