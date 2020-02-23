/* gcc -Wall -lm -g qe.c -o qe */
#include <stdio.h>
#include <math.h>

int main()
{
    double p, q, r, d;
    int n;

    n = scanf("%lf %lf %lf", &p, &q, &r); /* & - операция взятия адреса */
    if(n != 3) {
        printf("Error: wrong input.\n");
        return 1;
    }
    if(p == 0) {
        printf("Error: Not a quadratic equation!\n");
        return 2;
    }

    d = q*q - 4*p*r;

    if(d < 0) {
        printf("No roots\n");
        return 0;
    }
    d = sqrt(d);
    printf("%.5f %.5f\n", (-q-d)/(2*p), (-q+d)/(2*p));
    return 0;
}
