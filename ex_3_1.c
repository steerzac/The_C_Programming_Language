/* Write a binary search with only one test inside the loop */

/*
  binsearch_two_test results
  N_ELEMENTS  | one_test time (s) | two_test time (s)
  ---------------------------------------------------
  100         | .005              | .005
  1,000       | .009              | .10
  10,000      | .051              | .51
  100,000     | .470              | .476
  1,000,000   | 4.730             | 4.826

  one_test is faster just barely...
*/
#include <stdio.h>

#define N_ELEMENTS 1000000

int binsearch_one_test(int x, int v[], int n) {
  int low, high, mid;

  low = 0;
  high = n - 1;
  mid = (low + high) / 2;
  while(low <= high && v[mid] != x) {
    if (x < v[mid]) high = mid - 1;
    else low = mid + 1;
    mid = (low + high) / 2;
  }

  if (low > high) return -1;
  else return mid;
}

int binsearch_two_test(int x, int v[], int n) {
  int low, high, mid;

  low = 0;
  high = n-1;
  while(low <= high) {
    mid = (low + high) / 2;
    if (x < v[mid]) high = mid-1;
    else if (x > v[mid]) low = mid+1;
    else return mid;
  }

  return -1;
}

int main(int argc, char const *argv[]) {

  int arr[N_ELEMENTS];
  for (int i = 0; i < N_ELEMENTS; ++i) {
    arr[i] = i;
  }

  for (int i = 0; i < N_ELEMENTS; ++i) {
    printf("%d == %d\n", i, binsearch_two_test(i, arr, N_ELEMENTS));
  }
  return 0;
}
