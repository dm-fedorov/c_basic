#include <stdio.h>
#include <float.h>

int main()
{
  /* http://scc-forge.lancaster.ac.uk/open/char/types/float */
  printf("float %ld bytes\n", sizeof(float));

  printf("%f\n", FLT_MIN);
  printf("%f\n", FLT_MAX);

  /* http://scc-forge.lancaster.ac.uk/open/char/types/double */
  printf("double %ld bytes\n", sizeof(double));

  printf("%le\n", DBL_MIN);
  printf("%le\n", DBL_MAX);

  printf("long double %ld bytes\n", sizeof(long double));

  printf("%Lg\n", LDBL_MIN);
  printf("%Lg\n", LDBL_MAX);

  return 0;
}
