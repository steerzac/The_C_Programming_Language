/*
  Write an alternate version of squeeze(s1, s2)
  that deletes each character in s1 that matches any character in s2
*/

#include <stdio.h>
#include <ctype.h>

char* z_squeeze(char s1[], char s2[]) {
  char bitset[255]; //bitset of s2 characters
  int i, j;

  // set bits in bitset
  for (i = 0; s2[i] != '\0'; ++i) {
    bitset[s2[i]] = 1;
  }

  //squeeze any s2 characters out of s1
  for (int i = j = 0; s1[i] != '\0'; ++i) {
    if (bitset[s1[i]] != 1) {
      s1[j++] = s1[i];
    }
  }
  s1[j] = '\0';
  return s1;

}

int main(int argc, char const *argv[]) {
  char s1[] = "hello billy!";
  char vowels[] = "aeiou";

  printf("%s\n", z_squeeze(s1, vowels));
  return 0;
}
