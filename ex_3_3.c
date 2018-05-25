/*
  Write a function expand(s1, s2) that expands shorthand notations like a-z
  in the string s1 into the equivalent complete list abc...xyz in s2. Allow
  for letters of either case and digits, and be prepared to handle cases like
  a-b-c and a-z0-9 and -a-z. A leading or trailing - is taken literally.
*/

#include <stdio.h>

//assumes s2 is large enough to hold the expanded s1
void expand(char s1[], char s2[]) {
  int i, j, start;

  i = j = 0;
  if (s1[0] == '-') { // handle starting dash
    s2[0] = '-';
    ++i, ++j;
  }

  while(s1[i] != '\0') {
    if (s1[i] != '-' || s1[i+1] == '\0') {
      start = s2[j++] = s1[i];
    } else {
      for (int t = start+1; t < s1[i+1]; ++t) {
        s2[j++] = t;
      }
    }
    ++i;
  }
  s2[j] = '\0';
}

int main(int argc, char const *argv[]) {
  char s1[] = "-a-d0-5a-e-";
  char s2[100];
  expand(s1, s2);
  printf("%s\n", s2);
  return 0;
}
