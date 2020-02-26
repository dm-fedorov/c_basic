#include <stdio.h>

int factorial(int number)
{
  int counter = 1;
  int result = 1;

  if(number == 0)
    return 1;

  while(counter <= number){
    result = result * counter;
    counter++;
  }

  return result;
}

int main()
{
   printf("%d: %d\n", 0, factorial(0));
   printf("%d: %d\n", 1, factorial(1));
   printf("%d: %d\n", 6, factorial(6));
   printf("%d: %d\n", 11, factorial(11));

   return 0;   /* indicate program ended successfully */
}
