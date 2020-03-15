#include <stdio.h>

int main()
{
     char str[] = "Hello";
     char *ptr = "Hello";

     str[4]=0;
     /* ptr[4]=0; */

     printf("%ld %ld\n", sizeof(str), sizeof(ptr));

     return 0;
}
