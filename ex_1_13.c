/* Print a histogram of the lengths of words in input. */

#include <stdio.h>

#define MAX_WORD_LEN 10

int isNonWordChar(int c) {
  return c == ' ' || c == '\t' || c == '\n';
}

void printHistogram(int a[], size_t len) {
  printf("- Word Lengths -\n");
  for (int i = 0; i < len; ++i) {
    printf("%d: ", i);
    for (int j = 0; j < a[i]; ++j) putchar('x');
    putchar('\n');
  }
}

int main(int argc, char const *argv[]) {
  int c;
  int lens[MAX_WORD_LEN] = {0};
  while((c = getchar()) != EOF) {
    //eat all non word characters
    while(c != EOF && isNonWordChar(c)) c = getchar();

    //eat all word characters
    int wordLen = 0;
    while(c != EOF && !isNonWordChar(c)) {
      ++wordLen;
      c = getchar();
    }

    if (wordLen < MAX_WORD_LEN) {
      ++lens[wordLen];
    }
  }

  printHistogram(lens, MAX_WORD_LEN);
  return 0;
}
