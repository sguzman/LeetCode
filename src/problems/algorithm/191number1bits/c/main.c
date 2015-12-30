#include <stdio.h>
#include <stdlib.h>

#include "number1bits.h"

int main(void) {
	uint32_t i;
	for (i = 0; i < 10; ++i) {
		printf("%d\n", hammingWeight(i));
	}

	return EXIT_SUCCESS;
}

