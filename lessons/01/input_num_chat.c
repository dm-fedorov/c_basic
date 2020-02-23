#include <stdio.h>

int main()
{
    int age;
    int n;

    printf("Hello!\nWhat's your age?\n");
    n = scanf("%d", &age);
    if(n != 1){
        return 1; /* exit with error */
    }

    printf("I thought you were older! You are %d years old!\n", age + 2);
    printf("Bye!\n");

    return 0;
}
