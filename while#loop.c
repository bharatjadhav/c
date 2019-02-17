/* print the user name in 5 times */
#include <stdio.h>
void main()
{
    char n[10];

    int i=0;
    printf("enter the name ");
    scanf("%s",n);
    while(5>i)
    {
        printf("%s \n",n);
        i++;
    }
}