#include <stdio.h>

int main()
{
   int counter = 2;
   int total = 0;

   while(counter <= 30){
      if(counter % 2 == 0)
        total = total + counter; /* total += grade; */
      counter = counter + 1; /* counter++; */
   }

   printf("Sum is %d\n", total);

   return 0;   /* indicate program ended successfully */
}
