/*
  Explain why x &= (x-1) deletes the right most 1-bit in a two's complement system.
  Use this observation to write a faster version of bitcount
*/

#include <stdio.h>
#include <math.h>
/*
  Explaination: (x-1) has a 0-bit where x has its RMS 1-bit.
                To the left of the RMS 1-bit, x and (x-1) are the same
                To the right of the RMS 1-bit, x has 0-bits and (x-1) has 1-bits
                x looks like:   x bits | RMS 1-bit  | 0-bits
                x-1 looks like: x bits | 0-bit      | 1-bits
                Computing &:    x bits | 0-bit      | 0-bits
*/

int bitcount(int x) {
  if (x == 0) return 0;
  int b = 1;
  while((x &= (x-1)) != 0) ++b;
  return b;
}

int main(int argc, char const *argv[]) {
  for (int i = 0; i < 10; ++i) {
    printf("%d\n", bitcount(pow(2, i)-1));
  }

  printf("%d\n", bitcount(9));
  return 0;
}
