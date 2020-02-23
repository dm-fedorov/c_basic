#include <stdio.h>
#include <limits.h>

int main()
{
  /* http://scc-forge.lancaster.ac.uk/open/char/types/ints */

  printf("char: %ld byte\n", sizeof(char)); /* определяем размер в байтах */

  printf("%d\n", CHAR_MIN);
  printf("%d\n", CHAR_MAX);

  printf("unsigned char: %ld byte\n", sizeof(unsigned char));

  printf("%d\n", UCHAR_MAX);

  printf("short: %ld bytes\n", sizeof(short));
  printf("%d\n", SHRT_MIN);
  printf("%d\n", SHRT_MAX);

  printf("unsigned short: %ld bytes\n", sizeof(unsigned short));
  printf("%d\n", USHRT_MAX);

  printf("int: %ld bytes\n", sizeof(int));
  printf("%d\n", INT_MIN);
  printf("%d\n", INT_MAX);

  printf("unsigned int: %ld bytes\n", sizeof(unsigned int));
  printf("%u\n", UINT_MAX);

  printf("long int: %ld bytes\n", sizeof(long int));
  printf("%ld\n", LONG_MIN);
  printf("%ld\n", LONG_MAX);

  printf("unsigned long int: %ld bytes\n", sizeof(unsigned long int));
  printf("%lu\n", ULONG_MAX);

  return 0;
}

/*

char: 1 byte
-128
127
unsigned char: 1 byte
255
short: 2 bytes
-32768
32767
unsigned short: 2 bytes
65535
int: 4 bytes
-2147483648
2147483647
unsigned int: 4 bytes
4294967295
long int: 8 bytes
-9223372036854775808
9223372036854775807
unsigned long int: 8 bytes
18446744073709551615

*/
