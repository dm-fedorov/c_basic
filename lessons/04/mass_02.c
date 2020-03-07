#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int a[] = {1, 2, 3, 4, 5, 6, 7};
  int i;    /* счетчик */

  for(i = 0; i < sizeof(a)/sizeof(int); i++){
    printf("%d\n", a[i]);
  }

  return 0;
}
