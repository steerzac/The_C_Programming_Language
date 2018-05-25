/* Print ranges of char, short int, int, long int, float, double*/

#include <limits.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
  //char, unsigned and signed
  printf("u char:\n");
  printf("min:\t0\n");
  printf("max:\t%d\n", UCHAR_MAX);
  putchar('\n');

  printf("s char:\n");
  printf("min:\t%d\n", SCHAR_MIN);
  printf("max:\t%d\n", SCHAR_MAX);
  putchar('\n');

  //short int, unsigned and signed
  printf("u short:\n");
  printf("min:\t0\n");
  printf("max:\t%d\n", USHRT_MAX);
  putchar('\n');

  printf("s short:\n");
  printf("min:\t%d\n", SHRT_MIN);
  printf("max:\t%d\n", SHRT_MAX);
  putchar('\n');

  //int, unsigned and signed
  printf("u int:\n");
  printf("min:\t0\n");
  printf("max:\t%u\n", UINT_MAX);
  putchar('\n');

  printf("s int:\n");
  printf("min:\t%d\n", INT_MIN);
  printf("max:\t%d\n", INT_MAX);
  putchar('\n');

  //long int, unsigned and signed
  printf("u long int:\n");
  printf("min:\t0\n");
  printf("max:\t%lu\n", ULONG_MAX);
  putchar('\n');

  printf("s long int:\n");
  printf("min:\t%ld\n", LONG_MIN);
  printf("max:\t%ld\n", LONG_MAX);
  putchar('\n');


  return 0;
}
