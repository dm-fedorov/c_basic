#include <stdio.h>

int main()
{
  int num1;
  int num2;
  int sum;
  int n;

  printf("Enter first number\n");
  n = scanf("%d", &num1);
  if(n != 1) {
      printf("Error: wrong input.\n");
      return 1;
  }

  printf("Enter second number\n");
  n = scanf("%d", &num2);
  if(n != 1) {
      printf("Error: wrong input.\n");
      return 1;
  }

  sum = num1 + num2;

  printf("Sum is %d\n", sum);
  return 0;
}
