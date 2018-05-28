/*
  Write the function itob(n, s, b) that converts the integer n into a base b
  character representation in the string s. In particular itob(n, s, 16)
  formats n as a hexadecimal integer in s.
*/

#include <stdio.h>
#include <string.h>
#include <limits.h>

char digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

void reverse(char s[]){
  int n = strlen(s);

  for(int i = 0; i < n/2; ++i) {
    char t = s[i];
    s[i] = s[n-i-1];
    s[n-i-1] = t;
  }
}

// Does not account for bases larger than base 36
void itob(int n, char s[], int b) {
  int i, orig, nIsMin;

  orig = n;
  i = nIsMin = 0;
  if (orig < 0) {
    if (n == INT_MIN) {
      nIsMin = 1;
      n = INT_MAX;
    } else {
      n = -n;
    }
  }

  do {
    s[i++] = digits[(n % b)];
  } while((n /= b) > 0);

  if (orig < 0) s[i++] = '-';
  if (nIsMin) s[0]++;
  s[i] = '\0';
  reverse(s);
}

int main(int argc, char const *argv[]) {
  int n = 132;
  char s[100];
  itob(n, s, 8);
  printf("%s\n", s);
  return 0;
}
