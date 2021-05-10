//sum of first 10 natural numbers

#include <stdio.h>
int main()
{
    int num, i=0;

    
        while (i <= 10)
        {
            printf("enter num \n");
            scanf("%d",&num);
            if (num > 0)
            {
                printf("your number is positive ");
            }
            else if (num == 0)
            {
                printf("the value is zero");
            }
            else
            {
                printf("your number is negative");
            }
            i++;
        }

    return 0;
}