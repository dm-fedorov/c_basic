#include <stdio.h>

int main()
{
   int factorial = 1;
   int counter = 1;

   while(counter <= 5){
      factorial = factorial * counter;
      printf("%d: factorial is %d\n", counter, factorial);
      counter++;
   }

   return 0;   /* indicate program ended successfully */
}
