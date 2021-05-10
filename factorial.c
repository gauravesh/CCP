#include <stdio.h>
int main (){
    // factorial
    int a=4,fac=1,i=1;
  
    while (i<=a)
    {
        fac *=i;
        i++;
    }
    printf("the value is %d",fac);


    return 0;

}