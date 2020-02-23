#include <stdio.h>

int main()
{
   int counter, grade, total, average;
   int n;

   /* initialization phase */
   total = 0;
   counter = 1;

   /* processing phase */
   while(counter <= 10) {
      printf("Enter grade: ");

      n = scanf("%d", &grade);
      if(n != 1){
         return 1; /* error */
      }

      total = total + grade; /* total += grade; */
      counter = counter + 1; /* counter++; */
   }

   /* termination phase */
   average = total / 10;
   printf("Class average is %d\n", average);

   return 0;   /* indicate program ended successfully */
}
