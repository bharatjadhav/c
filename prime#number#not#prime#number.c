#include<stdio.h>
void main()
{
    int a;
    printf("Enter the number::");
    scanf("%d",&a);
    if(a==1||a==2||a==3||a==5||a==7)
    {
    	printf("%d is prime number",a);
    }
    else if (a%2>0&&a%3>0&&a%5>0&&a%7>0)
    {
    
    printf("%d is prime number",a);

    }
    else
    {
        printf("%d is a not prime number",a);

    }
    
    	
    }

