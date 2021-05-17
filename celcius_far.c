#include <stdio.h>
int main()
{
    float celcius , fahrenheit;
    printf ("enter the value of fahrenheit \n");
    scanf ("%f",&fahrenheit);

    celcius = (fahrenheit-32)*(5.0/9.0);
    printf("the value is %f celcius ", celcius);
    return 0;
}