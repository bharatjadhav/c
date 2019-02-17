#include<stdio.h>
void main()
{
    int a;
    accept:    //lable give as a accept 
    printf("Enter number :");
    scanf("%d",&a);
    if(a==0) goto accept; // if number is zero then using goto ist goes to acceptet
}
