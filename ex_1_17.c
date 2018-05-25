/* Print all input lines that are longer than 80 characters */

#include <stdio.h>

#define MAX_LINE 1000

//Read in one line at a time
int z_getline(char arr[], size_t len) {
  int i, c;

  for (i = 0; i < len-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
    arr[i] = c;
  }
  if (c == '\n') {
    arr[i] = c;
    ++i;
  }
  arr[i] = '\0';
  return i;
}

//Copy from -> to
void copy(char to[], char from[]) {
  int i = 0;
  while((to[i] = from[i]) != '\0') ++i;
}

int main(int argc, char const *argv[]) {
  int len;  /* current line length */
  char line[MAX_LINE];

  while((len = z_getline(line, MAX_LINE)) > 0) {
    //Continue reading large line
    int extra = len;
    while(extra == MAX_LINE-1 && line[MAX_LINE-2] != '\n') {
      extra = z_getline(line, MAX_LINE);
      len += extra;
    }

    if (len > 80) {
      printf("%s\n", line);
    }
  }

  return 0;
}
