
#include <stdio.h>
int main()
{
    int perent;
    printf("precent ? \n");
    scanf("%d", &perent);
     if (100 >= perent && perent > 75)
    {
        printf("your grade is O");
    }
    else if (75 >= perent && perent > 60)
    {
        printf("your grade is A");
    }
    else if (60 >= perent && perent > 50)
    {
        printf("your grade is B");
    }
    else if (50 >= perent && perent > 40)
    {
        printf("your grade is C");
    }
    else
    {
        printf("fail");
    }

    return 0;
}