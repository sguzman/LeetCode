#include <stdio.h>
#include "strstr.h"

static inline void testCase(char* haystack, char* needle, int expected) {
  int ret = strStr(haystack, needle);
  if (ret == expected) {
    printf("SUCCESS: ");
  } else {
    printf("FAILURE: ");
  }

  printf("\tHaystack: %s\n", haystack);
  printf("\tNeedle: %s\n", needle);

  printf("\tResult: %d\n", ret);
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

