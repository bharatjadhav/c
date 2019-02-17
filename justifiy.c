#include<stdio.h>
void main()
{
    int n=0;
    printf("enter the number");
    scanf("%d",&n);
    printf("the numger (L) left justification:%d",n);
    printf("\n the numger (R) right justification:%-d",n);
}