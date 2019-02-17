/* program to count number of digitd and print the revers of a number*/
#include<stdio.h>
void main()
{
int a=0,r=0,c=0;
printf("enter the number:");
scanf("%d",&a);
printf("\n Reverse of a number ");
while(a!=0){
    r=a%10;         //32%10=2 3%10=3
    c++;
    printf("%d",r);  //23
    a=a/10;         // 32/10=3       

}
printf("\n the number of dighits are %d",c);
}
