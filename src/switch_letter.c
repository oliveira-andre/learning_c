#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* changeLetter (char name[50], char letter_change) {
  int i;

  for (i = 0; name[i] != '\0'; ++i) {
    if(name[i] == letter_change) {
      name[i] = 'y';
    }
  }

  return name;
}

int main() {
  char name[50];
  char letter_change;
  letter_change = 'a';

  printf("type your first name: ");
  scanf(" %s", name);

  printf("%s", changeLetter(name, letter_change));
  return 0;
}
