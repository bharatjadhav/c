#include<stdio.h>
void main ()
{
    int pa,ir,p,i;
    printf("enter the intrest Rate ");
    scanf("%d",&ir);
    printf("Enter the  Amount");
    scanf("%d",&pa);
    printf("enter pried time(in yerar)::");
    scanf("%d",&p);
    i=((pa * ir)/100)*p;
    printf(" intrest is %d",i);
}