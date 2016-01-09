#include <stdio.h>
#include <stdlib.h>
#include "majorityelement.h"

int main(void) {
  int list[10] = {1,2,3,4,2,3,3,3,3,3};

  for (int i = 0; i < 10; ++i) {
    printf("%d", majorityElement(list, 10));
  }

  return EXIT_SUCCESS;
}
