#include <stdio.h>
int main()
{
    char a, b;
    printf("what is your char");
    scanf("%c", &a);
    b = a + 32;
    printf("and the lower case is %c", b);

    return 0;
}