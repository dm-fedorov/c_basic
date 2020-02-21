#include <stdio.h>

int main()
{
    int num;
    int n;

    n = scanf("%d", &num);
    if(n != 1){
        return 1; /* exit with error */
    }
    printf("My number is %d!\n", num);

    return 0;
}
