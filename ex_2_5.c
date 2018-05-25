/*
  Write the function any(s1, s2).
  Returns the first index in s1 where any character of s2 occurs.
  Return -1 if s1 contains no characters of s2.
*/

#include <stdio.h>

#define NUM_CHARS 255

int any(char s1[], char s2[]) {
  char bitset[NUM_CHARS];
  int i;

  for (i = 0; s2[i] != '\0'; ++i) {
    bitset[s2[i]] = 1;
  }

  for (i = 0; s1[i] != '\0'; ++i) {
    if (bitset[s1[i]] == 1) return i;
  }

  return -1;
}
int main(int argc, char const *argv[]) {
  char haystack[] = "Hello billy!";
  char needle[] = "x";
  printf("%d\n", any(haystack, needle));
  return 0;
}
