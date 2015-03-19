//
// Created by SGuzman on 3/19/2015.
//
#include <stdio.h>

#include "singlenum.h"

int main(void) {
	int nums[] = {1,2,3,4,5,6,7,8,1,2,3,4,5,6,7}, size = 15;
	printf("%d\n", singleNumber(nums, size));

	return 0;
}

