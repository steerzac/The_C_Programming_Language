/*
  Write a function setbits(x, p, n, y) that returns x with the n bits
  that begin at position p set to the rightmost n bits of y, leaving
  the other bits unchanged
*/

#include <stdio.h>

unsigned int getbits(unsigned int x, int p, int n) {
    return (x >> (p-n+1)) & ~(~0 << n);
}

unsigned int setbits(unsigned int x, int p, int n, unsigned int y) {
  y &= ~(~0 << n);  // clear everything but y's rightmost n bits
  x &= ~(~(~0 << n) << (p-n+1));  // zero n bits starting at p
  x |= y << (p-n+1); // insert y's bits at p
  return x;
}

int main(int argc, char const *argv[]) {
  unsigned int x = 26;
  unsigned int y = 0;
  int p = 3;
  int n = 4;
  int newX = setbits(x, p, n, y);
  printf("%d\n", newX); //should be 7
  return 0;
}
