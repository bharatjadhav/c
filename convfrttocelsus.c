#include<stdio.h>
void main()
{
    float tf=1.0,tc=1.0;
    printf("enter the fahrenheit temperature::F");
    scanf("%f",&tf);
       tc=(tf-32)/1.8;
    printf("%f C",tc);
}