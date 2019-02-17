/*accet 5 number then sum if 100 is enter exit the program */
#include<stdio.h>
void  main ()
{
    int a=0,s=0,i=0;
    while(i<=5)
    {
        printf("enter the number:: \n ");
        scanf("%d",&a);
        if (a==100) {
            break;
        }
        s=s+a;
        i++;

    }
printf("\n The sum is:: %d",s);
}