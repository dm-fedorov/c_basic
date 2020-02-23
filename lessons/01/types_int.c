#include <stdio.h>
#include <limits.h>

int main()
{
  /* http://scc-forge.lancaster.ac.uk/open/char/types/ints */

  printf("int %ld byte\n", sizeof(int));
  printf("%d\n", INT_MIN);
  printf("%d\n", INT_MAX);

  printf("unsigned %ld byte\n", sizeof(unsigned int));
  printf("%u\n", UINT_MAX);

  printf("long int %ld byte\n", sizeof(long int));
  printf("%ld\n", LONG_MIN);
  printf("%ld\n", LONG_MAX);

  return 0;
}
