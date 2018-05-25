/* Print histogram of character frequencies from input */

#include <stdio.h>

#define NUM_LETTERS 26

void printHistogram(int a[], size_t len) {
  printf("- Character Frequencies -\n");
  for (int i = 0; i < len; ++i) {
    printf("%c: ", (char)(i+'a'));
    for (int j = 0; j < a[i]; ++j) putchar('x');
    putchar('\n');
  }
}

int main(int argc, char const *argv[]) {
  int c;
  int letterFreqs[NUM_LETTERS] = {0};

  //Tally character frequencies
  while((c = getchar()) != EOF) {
    if (c >= 'a' && c <= 'z') {
      ++letterFreqs[c - 'a'];
    }
  }

  printHistogram(letterFreqs, NUM_LETTERS);
  return 0;
}
