/* calulate the factorial of a number */
#include<stdio.h>
void main()
{
    int a=1,f=1,i=1;
printf("enter the number::");
scanf("%d",&a);
while(i<=a){
    f=f*i;
    i++;

}
printf("%d number factorial is ::%d ",a,f);
}