#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the value of a ");
    scanf("%d", &a);

    printf("enter the value of b ");
    scanf("%d", &b);
    if (a > b)// compare 
    {
        printf("here %d is greater", a);
    }
    else
    {
        printf("here %d is greater ", b);
    }

    return 0;
}