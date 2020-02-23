#include <stdio.h>

int main()
{
   int counter = 1;
   int total = 0;

   while(counter <= 10){
      total = total + counter; /* total += grade; */
      counter = counter + 1; /* counter++; */
   }

   printf("Sum is %d\n", total);

   return 0;   /* indicate program ended successfully */
}
