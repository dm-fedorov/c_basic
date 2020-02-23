#include <stdio.h>

int main()
{
   int counter = 1;
   int total = 1;

   while(counter <= 15){
      if(counter % 2 != 0)
        total = total * counter; /* total += grade; */
      counter = counter + 1; /* counter++; */
   }

   printf("mul is %d\n", total);

   return 0;   /* indicate program ended successfully */
}
