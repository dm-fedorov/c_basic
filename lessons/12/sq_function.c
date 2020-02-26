#include <stdio.h>

double sq(double r)
{
  double pi = 3.1415;

  return r*r*pi;
}

int main()
{
  double radius;
  int n;

  printf("Enter a radius: ");
  n = scanf("%lf", &radius);
  if(n != 1){
    printf("Input error!\n");
    return 1;
  }

  printf("Result: %.3f\n", sq(radius));

  return 0;
}
