#include <stdio.h>

int main(int argc, char const *argv[]) {
  int c;

  // Reading in input and printing to screen
  // for (c = getchar(); c != EOF; c = getchar()) {
  //   putchar(c);
  // }

  /* != has a higher precedence than = */
  // c = getchar() != EOF;
  // if (c == 0 || c == 1) {
  //   putchar((c == 0) ? '0' : '1');
  // } else {
  //   putchar('N');
  // }

  /* Print out EOF */
  printf("%d\n", EOF);
  return 0;
}
