#include <stdio.h>

int main() {
  float a,b;
  printf("Enter 2 numbers:");
  scanf("%f %f" ,&a ,&b);
  int op ;
    printf("Enter operator \n 1 for +\n 2 for -\n 3 for *\n 4 for /\n");
  scanf("%d" ,&op);
  switch (op) {
    case 1:
      printf("%.2f + %.2f = %.2f", a, b, a + b);
      break;
    case 2:
      printf("%.2f - %.2f = %.2f", a, b, a - b);
      break;
    case 3:
      printf("%.2f * %.2f = %f", a, b, a * b);
      break;
    case 4:
      if (b != 0) {
        printf("%.2f / %.2f = %.2f", a, b, a / b);
      } else {
        printf("error");
      }
      break;
    default:
      printf("Invalid operator");
  }
  return 0;
}
