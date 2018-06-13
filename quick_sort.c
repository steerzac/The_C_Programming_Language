#include <stdio.h>

void swap(int* a, int* b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void quick_sort(int arr[], int left, int right) {
  int pivot = right;
  int i = left-1;
  if (left >= right) return;

  for (int j = left; j < pivot; ++j) {
    if (arr[j] < arr[pivot]) {
      ++i;
      swap(&arr[i], &arr[j]);
    }
  }
  ++i;
  swap(&arr[i], &arr[pivot]);

  quick_sort(arr, left, i-1);
  quick_sort(arr, i+1, right);
}

int main(int argc, char const *argv[]) {
  int arr[] = {3, 1, 6, 9, 10, 11};
  int n = (int)(sizeof(arr)/sizeof(int));


  quick_sort(arr, 0, n-1);
  for (int i = 0; i < n; ++i) {
    printf((i == n-1) ? "%d\n" : "%d, ", arr[i]);
  }

  return 0;
}
