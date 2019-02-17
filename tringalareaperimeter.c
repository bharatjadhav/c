#include<stdio.h>
void main(){
    float a=1.0,b=1.0,c=1.0, ar=1.0,pr=1.0;
    printf("enter the three number");
    scanf("%f%f%f",&a,&b,&c);
    ar=(a*b*c)/2;
    pr=a+b+c;
printf("tringle area is %f and perimeter %f ",ar,pr);
}