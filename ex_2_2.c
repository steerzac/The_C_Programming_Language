/* Write a loop equivalent to
  for (i = 0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i) {
    s[i] = c;
  }
  without using && or ||
*/

#include <stdio.h>
int main(int argc, char const *argv[]) {
  char s[100];
  int lim = 10;
  int i = 0;
  char c = getchar();
  for (i = 0; ((i < lim-1) + (c != '\n') + (c != EOF)) == 3; ++i) {
    s[i] = c;
    c = getchar();
  }
  s[i] = '\0';
  printf("%s\n", s);
  return 0;
}
