#include <stdio.h>

int main()
{
   int a_count = 0;
   int b_count = 0;
   int c_count = 0;
   int d_count = 0;
   int f_count = 0;

   puts("Enter the letter grades." );
   puts("Enter the EOF character to end input." );
   int grade; /* one grade */

   /* loop until user types end-of-file key sequence */
   while((grade = getchar()) != EOF) {

      /* determine which grade was input */
      switch(grade) { /* switch nested in while */

         case 'A': /* grade was uppercase A */
         case 'a': /* or lowercase a */
            ++a_count;
            break; /* necessary to exit switch */

         case 'B': /* grade was uppercase B */
         case 'b': /* or lowercase b */
            ++b_count;
            break;

         case 'C': /* grade was uppercase C */
         case 'c': /* or lowercase c */
            ++c_count;
            break;

         case 'D': /* grade was uppercase D */
         case 'd': /* or lowercase d */
            ++d_count;
            break;

         case 'F': /* grade was uppercase F */
         case 'f': /* or lowercase f */
            ++f_count;
            break;

         case '\n': /* ignore newlines, */
         case '\t': /* tabs, */
         case ' ': /* and spaces in input */
            break;

         default: /* catch all other characters */
            printf("%s", "Incorrect letter grade entered.");
            puts(" Enter a new grade.");
            break; /* optional; will exit switch anyway */
      }
   } /* end while */

   /* output summary of results */
   puts("\nTotals for each letter grade are:");
   printf("A: %d\n", a_count);
   printf("B: %d\n", b_count);
   printf("C: %d\n", c_count);
   printf("D: %d\n", d_count);
   printf("F: %d\n", f_count);

   return 0;
}
