#include <stdio.h>

int main()
{
    int count = 1;
    int total = 0;
    int num;
    int n;
    int end;
    int c_even = 0;

    n = scanf("%d", &end);
    if(n != 1)
        return 1;

    while(count <= end){

        n = scanf("%d", &num);
        if(n != 1)
            return 1;

        if(num%2 != 0){
            total = total + num;
            c_even++;
        }
        count++;
    }

    printf("%f\n", (double)total/c_even);

    return 0;
}
