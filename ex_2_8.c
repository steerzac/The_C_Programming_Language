/*
  Write a function rightrot(x, n) that returns the value of
  the integer x rotated to the right by n bit positions
*/

#include <stdio.h>

unsigned int rightrot(unsigned int x, unsigned int n) {
  return ((x & ~(~0 << n)) << (sizeof(int) * 8 - n)) | (x >> n);
}

int main(int argc, char const *argv[]) {
  unsigned int x = 1;
  int n = 1;
  printf("%u\n", rightrot(x, n));
  return 0;
}
