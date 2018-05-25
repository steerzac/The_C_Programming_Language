/*
  Print input one world per line.
*/

#include <stdio.h>

#define OUT 0
#define IN 1

int nonWordChar(int c) {
  return c == ' ' || c == '\t' || c == '\n';
}

int main(int argc, char const *argv[]) {
  int c;
  while((c = getchar()) != EOF) {
    while(c != EOF && nonWordChar(c)) {
      c = getchar();
    }

    while(c != EOF && !nonWordChar(c)) {
      putchar(c);
      c = getchar();
    }

    if (c != EOF) putchar('\n');
  }
  return 0;
}
