/* Write a function htoi(s), which converts a string
    of hexadecimal digits (with optional 0x || 0X prefix)
    into equivalent integer
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

/* Converts a string of hexadecimal digits to an integer */
int ishex(char c) {
  char l = tolower(c);
  return l >= 'a' && l <= 'f';
}

// Returns 0 if orig does not start with prefix. 1 otherwise
int beginsWith(char orig[], char prefix[]) {
  if (strlen(orig) < strlen(prefix)) return FALSE;

  for (int i = 0; i < strlen(prefix); ++i) {
    if (orig[i] != prefix[i]) return FALSE;
  }

  return TRUE;
}

// Converts a string of hexadecimal characters to integer
int z_htoi(char a[]) {
  int n = 0;
  int power = 0;
  int i = (beginsWith(a, "0x") || beginsWith(a, "0X")) ? 2 : 0;

  for (; isdigit(a[i]) || ishex(a[i]); ++i, ++power) {
    if (isdigit(a[i])) {
      n += (a[i] - '0') * pow(16, power);
    } else {
      n += (a[i] - 'a' + 10) * pow(16, power);
    }
  }

  return n;
}

int main(int argc, char const *argv[]) {
  char a[] = "0xff";
  printf("%d\n", z_htoi(a));
  return 0;
}
