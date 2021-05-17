#include <stdio.h>
#include <math.h>
int main (){
    float x1,x2,y1,y2;
    printf("enter the values of x1,x2,y1,y2 respectively ");
    scanf("%f,%f,%f,%f",&x1,&x2,&y1,&y2);
    float ans,temp_a,temp_b,temp;
    temp_a= ( x2-x1)*(x2-x1);
    temp_b =( y2-y1)*(y2-y1);
    temp= temp_a + temp_b;
    ans=sqrt(temp);
    printf ("the num is %f",ans);

    return 0;
}