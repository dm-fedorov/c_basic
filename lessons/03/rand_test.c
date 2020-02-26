#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* https://younglinux.info/c/rand */

int main()
{
  printf("%ld bytes\n", sizeof(RAND_MAX));
  printf("%d\n", RAND_MAX);

  printf("%d\n", rand());
  printf("%d\n", rand());
  printf("%d\n", rand());

  printf("set seed\n");
  srand(time(NULL));

  printf("%d\n", rand());
  printf("%d\n", rand()%3);

  printf("%d\n", rand());
  printf("%d\n", rand()%3);

  return 0;
}
