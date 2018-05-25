/* Rewrite the function lower() using a conditional statement */

#include <stdio.h>

int z_lower(int c) {
  return (c >= 'A' && c <= 'Z') ? c + 'a' - 'A' : c;
}

int main(int argc, char const *argv[]) {
  for (int i = 0; i < 26; ++i) {
    printf("%c == %c\n", (i + 'a'), z_lower(i + 'A'));
  }

  return 0;
}
