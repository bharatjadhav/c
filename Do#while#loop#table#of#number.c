/* the table(पाद)of number*/
#include<stdio.h>

void main()
{
int n=0,i=1;
printf("enter the number:");
scanf("%d",&n);
do
{
    printf("\n %d",n*i);
    i++;

} 
while(i<=10);
}