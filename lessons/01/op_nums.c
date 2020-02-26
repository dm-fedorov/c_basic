#include <stdio.h>

int main()
{
  int a, b;
  double c, d;

  a = 5;
  b = 8;

  printf("%d + %d: %d\n", a, b, a + b);
  printf("%d - %d: %d\n", a, b, a - b);
  printf("%d * %d: %d\n", a, b, a * b);
  printf("%d / %d: %d\n", a, b, a / b);
  printf("%f / %f: %f\n", (double)a, (double)b, (double)a / (double)b);
  printf("%d %% %d: %d\n", a, b, a % b);

  c = 4.34;
  d = 6.98;

  printf("%.2f + %.2f: %f\n", c, d, c + d);
  printf("%.2f - %.2f: %f\n", c, d, c - d);
  printf("%.2f * %.2f: %f\n", c, d, c * d);
  printf("%.2f / %.2f: %f\n", c, d, c / d);

  printf("%d + %.2f: %f\n", a, d, (double)a + d); /* явное приведение типов */
  printf("%d - %.2f: %f\n", a, d, (double)a - d);
  printf("%d * %.2f: %f\n", a, d, (double)a * d);
  printf("%d / %.2f: %f\n", a, d, (double)a / d);

  return 0;

}
