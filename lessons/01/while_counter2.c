#include <stdio.h>

int main()
{
   int counter, grade, total, average, num;
   int n;

   /* initialization phase */
   total = 0;
   counter = 1;

   printf("Enter num of counter: ");
   n = scanf("%d", &num);
   if(n != 1){
      return 1; /* error */
   }

   /* processing phase */
   while(counter <= num){
      printf("Enter grade: ");

      n = scanf("%d", &grade);
      if(n != 1){
         return 1; /* error */
      }

      total = total + grade; /* total += grade; */
      counter = counter + 1; /* counter++; */
   }

   /* termination phase */
   average = total / num;
   printf("Class average is %d\n", average);

   return 0;   /* indicate program ended successfully */
}
