#include <stdio.h>

int main()
{
  int a;
  int n;

  n = scanf("%d", &a);
  if(n != 1){
    printf("Input error!\n");
    return 1;
  }

  if(a % 2 == 0)
    printf("Even\n");
  else
    printf("Odd\n");

  return 0;
}
