#include <stdio.h>

int main()
{
    double a, b, c, d, e;
    int n;
    printf("Enter five numbers.\n");
    n = scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e); /* & - операция взятия адреса */
    if (n != 5) {
        printf("Error: wrong input.\n");
        return 1;
    }

    printf("Average = %f\n", (a + b + c + d + e)/5);
    return 0;
}
