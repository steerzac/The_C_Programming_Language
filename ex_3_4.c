/*
  Modify itoa to print the edge case of -(2^wordsize-1) correctly
*/
#include <stdio.h>
#include <limits.h>
#include <string.h>

#define TRUE 1
#define FALSE 0

void reverse(char s[]) {
  int n = strlen(s);
  for(int i = 0; i < n/2; ++i) {
    char t = s[i];
    s[i] = s[n-i-1];
    s[n-i-1] = t;
  }
}

void itoa(int n, char s[]) {
  int i, sign, nIsMin = FALSE;

  if ((sign = n) < 0) {
    if (n == INT_MIN) {
      nIsMin = TRUE;
      n = INT_MAX;
    } else {
      n = -n;
    }
  }

  i = 0;
  do {
    s[i++] = (n % 10) + '0';
  } while ((n /= 10) > 0);

  if (sign < 0) s[i++] = '-';
  if (nIsMin) s[0] = s[0] + 1;
  s[i] = '\0';
  reverse(s);
}


int main(int argc, char const *argv[]) {
  int n = INT_MIN;
  char s[500];
  printf("before: %d\n", n);
  itoa(n, s);
  printf("after: %s\n", s);
  return 0;
}
