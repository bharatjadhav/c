#include<stdio.h>
void main(){
    int a,b,c,t,n;
    printf("printing all armstrong number between 1 to 500:\n");
    n=001;
    while(n<=500){
        a=n-((n/10)*10);
        b=(n/10)-((n/100)*10);
        c=(n/100)-((n/1000)*10);
        t=(a*a*a)+(b*b*b)+(c*c*c);
        if (t==n) {
            printf("\n Armstrong Number::%d   gg \t :%d: %d: %d",t,a,b,c);
        }
        n++;
    }
    
}