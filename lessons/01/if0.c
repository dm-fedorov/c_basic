#include <stdio.h>

int main()
{
   int a, b;
   a = 5;
   b = 7;

   printf("a > b => %d a == b => %d a < b => %d\n", a > b, a == b, a < b);

   if(a > b)
      printf("a > b\n");
   else
      if(a == b)
         printf("a == b\n");
      else
         printf("a < b\n");

   return 0;   /* indicate program ended successfully */
}
