#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define N_ELEMS 10

void swap(int* a, int* b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void quick_sort(int arr[], int left, int right) {
  if (right - left <= 0) return;

  int p = right;
  int less = left - 1;
  for (int i = left; i < p; ++i) {
    if (arr[i] < arr[p]) {
      swap(&arr[++less], &arr[i]);
    }
  }
  swap(&arr[++less], &arr[p]);
  quick_sort(arr, left, less-1);
  quick_sort(arr, less+1, right);
}

void print_array(int arr[], int len) {
  for (int i = 0; i < len; ++i) {
    printf("%d%s", arr[i], (i == len-1) ? "\n" : ", ");
  }
}

int main() {
  int arr1[N_ELEMS];
  for (int i = 0; i < N_ELEMS; ++i) {
    arr1[i] = rand() % 100;
  }
  printf("unsorted: ");
  print_array(arr1, N_ELEMS);
  quick_sort(arr1, 0, N_ELEMS-1);
  printf("sorted: ");
  print_array(arr1, N_ELEMS);
}
