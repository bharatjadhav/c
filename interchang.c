#include<stdio.h>
void main()
{
    int a,b;
    printf ("enter the number ");
    scanf("%d%d",&a,&b);
    printf(" old vlaue %d \t %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n new value %d \t %d",a,b);
}