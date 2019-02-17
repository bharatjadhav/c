/* accept markes in percentage from user and display */
#include<stdio.h>
void main(){
    int a;
    printf("enter the mark (percentage)");
scanf("%d",&a);
if (a<50)
{
    printf("faill");

}
else if (a>50&&a<55) {
    printf("pass class");

}else if (a>55&&a<59)
{
printf("second class");
}
else if (a>60&&a<70)
{
    printf("first class");
}
    else if (a>70&&a<80){
printf("Distinction");
    }
else if (a>81&&a<100){
printf("merit");}


    }
    





