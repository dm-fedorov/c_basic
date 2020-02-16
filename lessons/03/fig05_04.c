#include <stdio.h>

int maximum(int x, int y, int z); /* function prototype */

int main()
{
   int number1; /* first integer entered by the user */
   int number2; /* second integer entered by the user */
   int number3; /* third integer entered by the user */
   int n; /* check the scanf */

   printf("Enter three integers: ");
   n = scanf("%d%d%d", &number1, &number2, &number3);
   if (n != 3){
     printf("Error of input!\n");
     return 1;
   }

   /* number1, number2 and number3 are arguments */
   /* to the maximum function call */
   printf("Maximum is: %d\n", maximum(number1, number2, number3));

   return 0;
}

/* Function maximum definition */
/* x, y and z are parameters */
int maximum(int x, int y, int z)
{
   int max = x; /* assume x is largest */

   if (y > max) { /* if y is larger than max, */
      max = y; /* assign y to max */
   }

   if (z > max) { /* if z is larger than max, */
      max = z; /* assign z to max */
   }

   return max; /* max is largest value */
}
