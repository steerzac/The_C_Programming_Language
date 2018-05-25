/* Insertion sort */

#include <stdio.h>

#define N_ELEMS 10
void insertion_sort(int arr[], int n) {
  int i, j;
  for (i = 1; i < n; ++i) {
    int key = arr[i]; //unsorted element
    j = i-1; //end of sorted list
    while(j >= 0 && arr[j] > key) { //loop while we havent found insertion spot
      arr[j+1] = arr[j]; //shift sorted element to the right to make room for key
      j--; //go to next sorted element
    }
    arr[j+1] = key; //place unsorted element in sorted array
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
  insertion_sort(arr, N_ELEMS);
  print_array(arr, N_ELEMS);
  return 0;
}
