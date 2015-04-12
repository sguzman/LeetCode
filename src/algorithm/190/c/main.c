#include <stdio.h>
#include <stdlib.h>
#include "reversebits.h"

int main(void) {
  for (uint32_t i = 0; i < 20; ++i) {
    printf("%d\n", reverseBits(i));
  }

  return EXIT_SUCCESS;
}
