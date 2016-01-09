#include <stdio.h>
#include <stdlib.h>
#include "excelnumber.h"

int main(void) {
  char* list[5] = {"A", "B", "C", "D", "AA"};

  for (int i = 0; i < 5; ++i) {
    printf("%d\n",titleToNumber(list[i]));
  }

  return EXIT_SUCCESS;
}
