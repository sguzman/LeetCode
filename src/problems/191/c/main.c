//
// Created by SGuzman on 3/19/2015.
//
#include <stdio.h>
#include <tiff.h>

#include "number1bits.h"

int main(void) {
	uint32 i;
	for (i = 0; i < 10; ++i) {
		printf("%d\n", hammingWeight(i));
	}

	return 0;
}
