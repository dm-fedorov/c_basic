#include <stdio.h>

int main()
{
   int c = 5;
   printf("%d\n", c);
   printf("%d\n", c++);    /* postincrement */
   printf("%d\n\n", c);

   c = 5;
   printf("%d\n", c);
   printf("%d\n", ++c);    /* preincrement */
   printf("%d\n", c);

   return 0;   /* successful termination */
}
