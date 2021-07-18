#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;

    printf("ax^2 + bx + c = 0; Enter a,b,c ");

    scanf("%lf %lf %lf", &a, &b, &c);

    double discriminant = b * b - 4 * a * c;
    if (discriminant < 0)
    {
        discriminant *= -1;

        double x = -b / (2 * a);
        double y = sqrt(discriminant) / (2 * a);

        printf("Root1: %lf + (%lf)i", x, y);
        printf("\n Root2: %lf + (%lf)i\n", x, y);
        printf("roots are imaginary");
    }
    else
    {
        double x = -b / (2 * a);
        double y = sqrt(discriminant) / (2 * a);
        double rootone, roottwo;
        rootone = x + y;
        roottwo = x - y;
        if (rootone == roottwo)
        {
            printf("Root1: %lf", rootone);
            printf("\nRoot2: %lf", roottwo);
            printf("\nRoots are equal");
        }
        else
        {
            printf("Root1: %lf", rootone);
            printf("\nRoot2: %lf", roottwo);
            printf("\nroots are real and unequal");
        }
    }

    return 0;
}