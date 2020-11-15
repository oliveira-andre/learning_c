#include <stdio.h>
#include <stdlib.h>

int main() {
  float v1, v2, result;
  char op;

  printf("type the first number: ");
  scanf("%f", &v1);

  printf("type the operation: ");
  scanf(" %c", &op);

  printf("type the second number: ");
  scanf("%f", &v2);

  switch(op) {
    case '+':
      result = v1 + v2;
      break;
    case '-':
      result = v1 - v2;
      break;
    case '*':
      result = v1 * v2;
      break;
    case '/':
      result = v1 / v2;
      break;
    default:
      result = 0;
      printf("invalid\n");
      break;
  }

  printf("the result: %f\n", result);
  return 0;
}
