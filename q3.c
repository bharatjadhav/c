#include<stdio.h>
void main()
{
    int a,b,r;
    float q=1.0;
    printf("enter the two number");
    scanf("%d%d",&a,&b);
    q=a/b;
    r=a%b; //renaminder
    printf("qutiont::%f \t Rimander:%d",q,r);

}