#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct person {
  int age;
  char name[51];
} s_person;

int main() {
  s_person p[5];
  int i;

  for (i = 0; i < 5; i++) {
    printf("type the name and age: ");
    scanf("%s %d", p[i].name, &p[i].age);
  }

  s_person p_aux = p[0];

  for (i = 1; i < 5; i++) {
    if (p_aux.age < p[i].age) {
      p_aux = p[i];
    }
  }

  printf("Name: %s | Age: %d\n", p_aux.name, p_aux.age);

  return 0;
}
