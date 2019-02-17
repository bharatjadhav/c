#include<stdio.h>
void main(){
    float a=1.0,b=1.0, ar=1.0,pr=1.0;
    printf("enter the hight and breadth \n");
    scanf("%f%f",&a,&b);
    ar=a*b;
    pr=2*(a+b);
printf("Rectringle area is %f and perimeter %f \n",ar,pr);
}