#include <stdio.h>

int main()
{
  int a_count = 0;
  int b_count = 0;
  int c_count = 0;
  int d_count = 0;
  int f_count = 0;

  int n;

  printf("Enter the letter: " );
  char grade;

  n = scanf("%c", &grade);
  if(n != 1)
     return 1;

  switch(grade) {

     case 'A':
     case 'a':
        ++a_count;
        break;

     case 'B':
     case 'b':
        ++b_count;
        break;

     case 'C':
     case 'c':
        ++c_count;
        break;

     case 'D':
     case 'd':
        ++d_count;
        break;

     case 'F':
     case 'f':
        ++f_count;
        break;

     case '\n':
     case '\t':
     case ' ':
        break;

     default:
        printf("Incorrect letter.");
        break;
  }


   /* output summary of results */
   puts("\nTotals for each letter:");
   printf("A: %d\n", a_count);
   printf("B: %d\n", b_count);
   printf("C: %d\n", c_count);
   printf("D: %d\n", d_count);
   printf("F: %d\n", f_count);

   return 0;
}
