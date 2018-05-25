/*
  Write a function escape(s, t) that converts newlines and tabs into visible
  escape characters \n and \t. Use a switch
*/

#include <stdio.h>
#include <string.h>

//Assumes t is large enough to hold the converted s string
void escape(char s[], char t[]) {
  int i = 0;
  int j = 0;
  while(s[i] != '\0') {
    switch(s[i]) {
      case '\n':
        t[j++] = '\\';
        t[j++] = 'n';
        break;
      case '\t':
        t[j++] = '\\';
        t[j++] = 't';
        break;
      default:
        t[j++] = s[i];
        break;
    }
    ++i;
  }

  t[j] = '\0';
}

int main(int argc, char const *argv[]) {
  char s[] = "hello \n \t billy!";
  char t[100];
  escape(s, t);
  printf("%s\n", t);
  return 0;
}
