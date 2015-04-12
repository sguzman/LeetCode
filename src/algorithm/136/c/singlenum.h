#pragma once

int singleNumber(int A[], int n) {
	int num = 0, i;
	for (i = 0; i < n; (num ^= A[i]), ++i);

	return num;
}
