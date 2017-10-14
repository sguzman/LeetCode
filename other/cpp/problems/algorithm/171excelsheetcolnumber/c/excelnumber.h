#pragma once

#include <string.h>

int titleToNumber(char* s) {
  int sum = 0;
  int size = (int) strlen(s);

  for (int down = size - 1, up = 0, coef26 = 1; up < size; (sum += (s[down] - 64) * coef26), ++up, --down, coef26 *= 26);

  return sum;
}
