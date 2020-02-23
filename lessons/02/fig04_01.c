/* Counter-controlled iteration */
#include <stdio.h>

int main()
{
   int counter = 1; /* initialization */

   while(counter <= 10) { /* iteration condition */
      printf("%d\n", counter);
      counter = counter + 1; /* counter++; */
   }

   return 0;

   /*
   int counter = 0;

   while (++counter <= 10)
      printf("%d\n", counter);
   */
}
