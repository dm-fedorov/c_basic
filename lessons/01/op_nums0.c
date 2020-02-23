#include <stdio.h>

int main()
{
  int a, b;
  int n;

  n = scanf("%d %d", &a, &b);
  if(n != 2){
    return 1; /* выходим из программы с ошибкой */
  }

  printf("%d + %d: %d\n", a, b, a + b);
  printf("%d - %d: %d\n", a, b, a - b);
  printf("%d * %d: %d\n", a, b, a * b);
  printf("%d / %d: %d\n", a, b, a / b);
  printf("%d %% %d: %d\n", a, b, a % b);

  return 0;
}
