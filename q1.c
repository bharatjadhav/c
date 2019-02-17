#include<stdio.h>
void main()
{
    int m1,m2,m3,total;
    float per;
    char name [20];

    printf("enter the name ");
    scanf("%s",name);

    printf("enter the three subject markes");
    scanf("%d%d%d",&m1,&m2,&m3);
total = m1+m2+m3;
per =total*100/300;
printf("\n NAME::%s \t Total:: %d \t Percentage::%4.2f %% ",name,total,per);

}