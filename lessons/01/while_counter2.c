#include <stdio.h>

int main()
{
   double average;              /* new data type */
   int counter, grade, total;
   int n;

   /* initialization phase */
   total = 0;
   counter = 0;

   /* processing phase */
   printf("Enter grade, -1 to end: ");
   n = scanf("%d", &grade);
   if(n != 1) {
       printf("Error: wrong input.\n");
       return 1;
   }

   while (grade != -1) {
      total += grade;
      counter += 1;
      printf("Enter grade, -1 to end: ");
      n = scanf("%d", &grade);
      if(n != 1) {
          printf("Error: wrong input.\n");
          return 1;
      }
   }

   /* termination phase */
   if (counter != 0) {
      average = (double) total / counter;
      printf("Class average is %.2f\n", average);
   }
   else
      printf("No grades were entered\n");

   return 0;   /* indicate program ended successfully */
}
