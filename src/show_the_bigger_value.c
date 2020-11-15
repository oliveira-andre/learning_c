#include <stdio.h>
#include <stdlib.h>

int main() {
  float v1, v2;

  printf("type me two values: ");
  scanf("%f %f", &v1, &v2);

  if (v1 > v2) {
    printf("the bigger value is: %f", v1);
  } else {
    printf("the bigger value is: %f", v2);
  }

  return 0;
}
