#include <stdio.h>
#include <stdlib.h>

void fibonacci(int qt) {
  int current = 1;
  int previous = 0;
  int newNumber;
  int i;

  qt--;
  printf("1 ");
  for (i = 0; i < qt; i++) {
    newNumber = current + previous;
    printf("%d ", newNumber);

    previous = current;
    current = newNumber;
  }
}

int main() {
  printf("Running Fibonacci\n");
  fibonacci(30);

  return 0;
}
