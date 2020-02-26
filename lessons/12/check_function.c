#include <stdio.h>

/* определение функции */
int is_even(int x)
{
  if(x % 2 == 0)
    return 1;
  else
    return 0;
}

int main()
{
  int a;
  int n;

  n = scanf("%d", &a);
  if(n != 1){
    printf("Input error!\n");
    return 1;
  }

  if(is_even(a))
    printf("Even\n");
  else
    printf("Odd\n");

  return 0;
}
