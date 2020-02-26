#include <stdio.h>

int is_even(int x)
{
  if(x % 2 == 0)
    return 1;
  else
    return 0;
}

int main()
{
   int counter = 2;
   int total = 0;

   while(counter <= 30){
      if(is_even(counter))
        total = total + counter; /* total += counter; */

      counter = counter + 1; /* counter++; */
   }

   printf("Sum is %d\n", total);

   return 0;   /* indicate program ended successfully */
}
