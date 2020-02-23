#include <stdio.h>
#include <limits.h> /* http://scc-forge.lancaster.ac.uk/open/char/types/ */

int main()
{
  signed char ch = 126;

  printf("%ld byte\n", sizeof(char)); /* определяем размер в байтах */

  printf("%d\n", CHAR_MIN);
  printf("%d\n", CHAR_MAX);

  printf("%d\n", ch);
  printf("%c\n", ch); /* сопоставляет номер с символом в ascii таблице */

  printf("%d\n", ch = ch + 2); /* переполнение */

  return 0;
}
