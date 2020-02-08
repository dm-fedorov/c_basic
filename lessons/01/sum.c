#include <stdio.h>

int main()
{
  int num1;
  int num2;
  int sum;

  printf("Enter first number\n");
  scanf("%d", &num1);

  printf("Enter second number\n");
  scanf("%d", &num2);

  sum = num1 + num2;

  printf("Sum is %d\n", sum);
  return 0;
}
