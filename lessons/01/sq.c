#include <stdio.h>

int main()
{
  double r;
  int n;
  double pi = 3.1415;

  printf("Enter a radius: ");
  n = scanf("%lf", &r);
  if(n != 1){
    return 1;
  }

  printf("Result: %.3f\n", r*r*pi);

  return 0;
}
