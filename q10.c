#include<stdio.h>
void main()
{
    int a =1,b=1;
    printf("enter the number:: ");
    scanf("%d",&a);
    a=b;
     a+=1;
   printf("increment == %d",a);
    b-=1;
    b-=b;
        printf("increment == %d \t decrement == %d",a,b);
}