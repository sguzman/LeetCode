#pragma once

int majorityElement(int A[], int n) {
  int number = A[0], freq = 0;

  for (int i = 0; i < n; ++i) {
    if (A[i] == number) {
      ++freq;
    } else {
      if (--freq == 0) {
        number = A[i];
        freq = 1;
      }
    }
  }
  return number;
}
