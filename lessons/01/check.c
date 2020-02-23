#include <stdio.h>

int main()
{
  int a;
  int n;

  n = scanf("%d", &a);
  if(n != 1){
    return 1;
  }

  if(a % 2 == 0)
    printf("even\n");
  else
    printf("odd\n");

  return 0;
}
