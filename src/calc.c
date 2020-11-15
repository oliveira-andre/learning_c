#include <stdio.h>
#include <stdlib.h>

int main() {
  float v1, v2, result;
  char op;

  while (1) {
    printf("type the calc: ");
    scanf("%f %c %f", &v1, &op, &v2);

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
  }

  return 0;
}
