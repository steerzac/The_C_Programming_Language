/*
  Write a function invert(x, p, n) that returns with the n bits
  that begin at position p inverted (i.e., 1 changed to 0 and vice versa),
  leaving the others unchanged.
*/
#include <stdio.h>
int invert(int x, int p, int n) {
  x ^= (~(~0 << n) << (p-1));
  return x;
}

int main(int argc, char const *argv[]) {
  int x = 13;
  int p = 2;
  int n = 2;
  printf("%d\n", invert(x, p, n));
  return 0;
}
