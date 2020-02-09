#include <stdio.h>

int main()
{
   int num1, num2;
   int n;
   
   printf("Enter two integers, and I will tell you\n");
   printf("the relationships they satisfy: ");
   scanf("%d %d", &num1, &num2);   /* read two integers */
   if(n != 2) {
       printf("Error: wrong input.\n");
       return 1;
   }

   if (num1 == num2)
      printf("%d is equal to %d\n", num1, num2);

   if (num1 != num2)
      printf("%d is not equal to %d\n", num1, num2);

   if (num1 < num2)
      printf("%d is less than %d\n", num1, num2);

   if (num1 > num2)
      printf("%d is greater than %d\n", num1, num2);

   if (num1 <= num2)
      printf("%d is less than or equal to %d\n", num1, num2);

   if (num1 >= num2)
      printf("%d is greater than or equal to %d\n", num1, num2);

   return 0;   /* indicate program ended successfully */
}
