// Read input, copy to output, replace multiple blanks with a single blank

#include <stdio.h>

int main(int argc, char const *argv[]) {
  int c;
  while((c = getchar()) != EOF) {
    int blankFlag = 0;
    while(c == ' ') {
      blankFlag = 1;
      c = getchar();
    }

    if (blankFlag) putchar(' ');
    putchar(c);
  }
  return 0;
}
