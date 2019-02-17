#include<stdio.h>
void main()
{
    int a =0,b=1,t,c,i=1;
    printf("Enter the posion of elment:");
    scanf("%d",&c);
    printf("%d \n %d",a,b);
    while(c>=i){
        t=a+b;
        printf("\n %d",t);
        a=b;
        b=t;
        i++;
    }
    
}