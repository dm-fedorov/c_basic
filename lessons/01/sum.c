#include <stdio.h>

int main()
{
  int num1, num2, sum;  
  int n;

  printf("Enter a first number\n");
  n = scanf("%d", &num1);
  if(n != 1) {
      printf("Error: wrong input.\n");
      return 1;
  }

  printf("Enter a second number\n");
  n = scanf("%d", &num2);
  if(n != 1) {
      printf("Error: wrong input.\n");
      return 1;
  }

  sum = num1 + num2;

  printf("Sum is %d\n", sum);
  return 0;
}
