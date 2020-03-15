#include <stdio.h>

int main()
{
    int x;
    int *p;

    void *z;

    p = &x;
    *p = 27;  /* x = 27 */

    z = &x;

    printf("%p: p=%d x=%d z=%p\n", p, *p, x, z);

    return 0;
}
