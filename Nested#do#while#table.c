#include<stdio.h>
void main()
{
    int a=1,i=1;
    do
    {
        a++;
        do
        {
            printf("\t %d",a*i);
        i++;
        } while (i<=10);
        i=1;
        printf("\n");

    } while (a<12);
    
}