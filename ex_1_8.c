/* Count blanks, tabs, and newlines */

#include <stdio.h>


int main(int argc, char const *argv[]) {
  int c;
  int blanks = 0, tabs = 0, newlines = 0;
  while((c = getchar()) != EOF) {
    if (c == ' ') ++blanks;
    else if (c == '\t') ++tabs;
    else if (c == '\n') ++newlines;
  }

  printf("blanks: %d\n", blanks);
  printf("tabs: %d\n", tabs);
  printf("newlines: %d\n", newlines);
  return 0;
}
