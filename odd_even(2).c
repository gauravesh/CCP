#include <stdio.h>
int main()
{
    int a;
    printf("what is your number ?? ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("your number is even \n");
    }
    else
    {
        printf("your number is odd \n");
    }

    return 0;
}