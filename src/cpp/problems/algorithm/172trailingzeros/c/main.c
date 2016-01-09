#include <stdio.h>
#include <stdlib.h>
#include "trailingzeros.h"

int main(void) {
  for (int i = 0; i < 20; ++i) {
    printf("%d\n",trailingZeroes(i));
  }

  return EXIT_SUCCESS;
}
