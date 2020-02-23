#include <stdio.h>
#include <float.h>

int main()
{
  /* http://scc-forge.lancaster.ac.uk/open/char/types/float */
  printf("float %ld bytes\n", sizeof(float)); /* обычной точности */

  printf("%e\n", FLT_MIN);
  printf("%e\n", FLT_MAX);

  /* http://scc-forge.lancaster.ac.uk/open/char/types/double */
  printf("double %ld bytes\n", sizeof(double)); /* двойной точности */

  printf("%le\n", DBL_MIN);
  printf("%le\n", DBL_MAX);

  printf("long double %ld bytes\n", sizeof(long double)); /* повышенной точности */

  printf("%Le\n", LDBL_MIN);
  printf("%Le\n", LDBL_MAX);

  return 0;
}

/*

float 4 bytes
1.175494e-38
3.402823e+38
double 8 bytes
2.225074e-308
1.797693e+308
long double 16 bytes
3.3621e-4932
1.18973e+4932

*/
