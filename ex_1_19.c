/* Reverse each line of input and print it. */

#include <stdio.h>

#define MAX_LINE 1000

//Read in one line at a time
int z_getline(char arr[], size_t len) {
  int i, c;

  for (i = 0; i < len-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    arr[i] = c;
  }
  arr[i] = '\0';
  if (i == 0 && c == '\n') ++i;
  return i;
}

int length(char arr[]) {
  int i = 0;
  while(arr[i] != '\0') ++i;
  return i;
}

void reverse(char arr[]) {
  int len = length(arr);
  for (int i = 0; i < len/2; ++i) {
    char t = arr[i];
    arr[i] = arr[len - 1 - i];
    arr[len - 1 - i] = t;
  }
}

int main(int argc, char const *argv[]) {
  int len;  /* current line length */
  char line[MAX_LINE];

  while((len = z_getline(line, MAX_LINE)) > 0) {
    reverse(line);
    printf("%s\n", line);
  }

  return 0;
}
