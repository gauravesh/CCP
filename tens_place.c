#include <stdio.h>
int main (){
    int a=2345;
    int ones,tens,temp;


    tens = a%100;
    temp = tens/10;
    tens = temp ;

    printf("the pace is %d \n",tens);



    return 0;
}