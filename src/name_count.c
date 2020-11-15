#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  char name[50];
  int i;

  printf("type your first name: ");
  scanf(" %s", name);
  for (i = 0; name[i] != '\0'; ++i);

  printf("%d", i);
  return 0;
}
