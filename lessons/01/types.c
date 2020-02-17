#include <stdio.h>
#include <limits.h> /* http://scc-forge.lancaster.ac.uk/open/char/types/ints */

int main(){

  signed char ch = 126;

  printf("%ld byte\n", sizeof(char));

  printf("%d\n", CHAR_MIN); /* https://ru.wikipedia.org/wiki/Limits.h */
  printf("%d\n", CHAR_MAX);

  printf("%c\n", ch);
  printf("%d\n", ch = ch + 2);

  return 0;
}
