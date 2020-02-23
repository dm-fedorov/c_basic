#include <stdio.h>

int main()
{
   int num1, num2;
   int n;

   printf("Enter two integers: \n");   

   n = scanf("%d %d", &num1, &num2);   /* read two integers */
   if(n != 2) {
       printf("Error: wrong input.\n");
       return 1;
   }

   if(num1 == num2)
      printf("%d == %d\n", num1, num2);

   if(num1 != num2)
      printf("%d != %d\n", num1, num2);

   if(num1 < num2)
      printf("%d < %d\n", num1, num2);

   if(num1 > num2)
      printf("%d > %d\n", num1, num2);

   if(num1 <= num2)
      printf("%d <= %d\n", num1, num2);

   if(num1 >= num2)
      printf("%d >= %d\n", num1, num2);

   return 0;   /* indicate program ended successfully */
}
