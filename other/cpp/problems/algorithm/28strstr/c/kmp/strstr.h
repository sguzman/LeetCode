#pragma once

#include <stddef.h>
#include <string.h>
#include <stdlib.h>

int* mismatch(char*,size_t);
int match(char*,size_t,char*,size_t);

int strStr(char *haystack, char *needle) {
  size_t lenH = strlen(haystack);
  size_t lenN = strlen(needle);

  return match(haystack, lenH, needle, lenN);
}

int* mismatch(char* needle, size_t len) {
  if (len < 2) {
    len = 2;
  }

  int* overlap = (int*) malloc((sizeof(int)) * len);
  overlap[0] = -1;
  overlap[1] = 0;

  for (int pos = 2, cnd = 0; pos < len;) {
    if (needle[pos - 1] == needle[cnd]) {
      overlap[pos] = ++cnd;
      ++pos;
    } else if (cnd > 0) {
      cnd = overlap[cnd];
    } else {
      overlap[pos] = 0;
      ++pos;
    }
  }

  return overlap;
}

int match(char* T, size_t lenH, char*P, size_t lenN) {
  if (T[0] == '\0' || P[0] == '\0') {
    if (P[0] == '\0') {
      return 0;
    }

    return -1;
  }

  int* overlap = mismatch(P, lenN);
  int endGame = lenN - 1;

  for (int i = 0, m = 0; m + i < lenH;) {
    if (P[i] == T[m + i]) {
      if (i == endGame) {
        free(overlap);
        return m;
      }
      ++i;
    } else if (i > 0) {
      m += i - overlap[i];
      i = overlap[i];
    } else {
      ++m;
    }
  }

  free(overlap);
  return -1;
}
