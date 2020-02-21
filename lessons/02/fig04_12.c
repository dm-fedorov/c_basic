#include <stdio.h>

int main()
{
   int x;

   for(x = 1; x <= 10; ++x){

      if(x == 5) {
         continue;
      }

      printf("%d ", x);
   }

   puts("\nUsed continue to skip printing the value 5");

   return 0;
}
