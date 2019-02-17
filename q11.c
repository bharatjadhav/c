#include<stdio.h>
void main()
{
    int ic;
    char in[10];
    float qu=1.0,r=1.0,nam=1.0,am=1.0,va=1.0;
    printf("enter the iterm code  and item name ");
    scanf("%d %s",&ic,in);
    printf("enter the quntity and rate");
    scanf("%f %f",&qu,&r);
    am=qu*r;
    va=(am*12.5)/100;
    nam=am+va;
    printf("Item id=%d Item name :: %s \t Amount :: %f \t VAT amount:: %f \t Net Amount: %f",ic,in,am,va,nam);


}