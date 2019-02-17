#include <stdio.h>
void main()
{
    float a=1.0,b=1.0,low=1.0;
    printf("enter the two number:");
    scanf("%f%f",&a,&b);
    low=(a<b)?a:b;
    printf("lower the number %10.2f",low);
}