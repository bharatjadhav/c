#include<stdio.h>
void main()
{
    int m1,m2,m3,m4,m5,sum,avg;
    printf("enter the Five number");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    sum = m1+m2+m3+m4+m5;
    avg = sum/5;
    printf("sum is ::%d \t avrage :: %d",sum,avg);

}