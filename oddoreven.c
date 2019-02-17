#include<stdio.h>
void main()
{
    int a=0;
    printf("Enter the A number::");
    scanf("%d",&a);
    if(a%2==0){

        printf("number is even:%d",a);

    }
    else
    {
        printf("number is odd::%d",a);
    }
}