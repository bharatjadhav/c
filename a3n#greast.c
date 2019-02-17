/* accept 3  numbers from user and find out the greatest number */
#include<stdio.h>
void main()
{
 int a,b,c;
 printf("enter the three number :;");
 scanf("%d%d%d",&a,&b,&c);
 if (a>b&&a>c) {printf("%d is greatest number ::",a);
 }
else if (b>a&&b>c) {printf("%d is greatest number ::",b);
 }
 else if (c>b&&a<c) {printf("%d is greatest number ::",c);
 }
 
}