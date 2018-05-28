/*
  Write a version of itoa that accepts three arguments instead of two.
  The third argument is a minimum field width; the converted number must be
  padded with blanks on the left if necessary to make it wide enough.
*/
#include <stdio.h>
#include <limits.h>
#include <string.h>

void reverse(char s[]) {
  int n = strlen(s);

  for (int i = 0; i < n/2; ++i) {
    char t = s[i];
    s[i] = s[n-i-1];
    s[n-i-1] = t;
  }
}

void itoa(int n, char s[], int w) {
  int i, orig, nIsMin;

  orig = n;
  i = nIsMin = 0;
  if (orig < n) {
    if (orig == INT_MIN) {
      nIsMin = 1;
      n = INT_MAX;
    } else {
      n = -n;
    }
  }

  do {
    s[i++] = (n % 10) + '0';
  } while((n /= 10) > 0);

  if (orig < 0) s[i++] = '-';
  if (nIsMin) s[0]++;
  while(i < w) s[i++] = ' ';
  s[i] = '\0';
  reverse(s);
}

int main(int argc, char const *argv[]) {
  int n = -10;
  int w = 5;
  char s[100];
  itoa(n, s, w);
  printf("%s\n", s);
  return 0;
}
