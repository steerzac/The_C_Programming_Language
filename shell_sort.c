/* Shell sort */

#include <stdio.h>

#define N_ELEMS 10

void shell_sort(int arr[], int n) {
  int gap, i, j, temp;

  for (gap = n/2; gap > 0; gap /= 2) {
    for (i = gap; i < n; ++i) {
      int key = arr[i];
      j = i - gap;
      while(j >= 0 && arr[j] > key) {
        arr[j+gap] = arr[j];
        j -= gap;
      }
      arr[j+gap] = key;
    }
  }
}

void print_array(int arr[], int n) {
  for (int i = 0; i < n; ++i) {
    printf("%d%s", arr[i], (i == n-1) ? "\n" : ", ");
  }
}

int main(int argc, char const *argv[]) {
  int arr[N_ELEMS];
  for (int i = 0; i < N_ELEMS; ++i) {
    arr[i] = N_ELEMS - i;
  }

  print_array(arr, N_ELEMS);
  shell_sort(arr, N_ELEMS);
  print_array(arr, N_ELEMS);
  return 0;
}
