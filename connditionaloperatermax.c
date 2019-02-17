#include<stdio.h>
void main()
{
    int a,b,max;
    printf("Enter the two number ");
    scanf("%d%d",&a,&b);  
    max=a>b?a:b;                               // use of ternary operator '?' 
    printf("grater number is %d",max);
}