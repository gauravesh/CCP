#include <stdio.h>
int main()
{
    int mark[4][3], max, i, j;
    printf("Enter the marks \n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%d", &mark[i][j]);
    }
    for (j = 0; j < 3; j++)
    {
        max = mark[0][j];
        for (i = 0; i < 4; i++)
        {
            if (max < mark[i][j])
            {
                max = mark[i][j];
            }
        }
        printf(" highest marks in a subject is %d= %d \n", j + 1, max);
    }

    return 0;
}