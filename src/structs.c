#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct person {
  int age;
  char name[51];
};

int main() {
  struct person p1;
  struct person p2;

  p1.age = 18;
  strcpy(p1.name, "Test");

  p2.age = 40;
  strcpy(p2.name, "Old Test");

  printf("Name: %s | Age: %d\n", p1.name, p1.age);
  printf("Name: %s | Age: %d\n", p2.name, p2.age);

  return 0;
}
