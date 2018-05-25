/* Print input. Remove trailing blanks, tabs. Do not print empty newlines */

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

//Copy from -> to
void copy(char to[], char from[]) {
  int i = 0;
  while((to[i] = from[i]) != '\0') ++i;
}

void trim(char arr[], size_t len) {
  for (int i = len-1; i >= 0 && (arr[i] == '\t' || arr[i] == ' '); --i) {
    arr[i] = '\0';
  }
}

int isEmpty(char arr[]) {
  return arr[0] == '\0';
}

int main(int argc, char const *argv[]) {
  int len;  /* current line length */
  char line[MAX_LINE];

  while((len = z_getline(line, MAX_LINE)) > 0) {
    trim(line, len);
    if (!isEmpty(line)) {
      printf("%s#\n", line);
    }
  }

  return 0;
}
