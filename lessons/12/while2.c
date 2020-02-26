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
   int counter = 1;
   int total = 1;

   while(counter <= 15){
      if(!is_even(counter))
        total = total * counter; /* total += grade; */
      counter = counter + 1; /* counter++; */
   }

   printf("mul is %d\n", total);

   return 0;   /* indicate program ended successfully */
}
