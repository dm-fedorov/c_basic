#include <stdio.h>

int main()
{
   int counter = 1;

   do {
      printf("%d  ", counter);
   } while (++counter <= 10);

   return 0;
}
