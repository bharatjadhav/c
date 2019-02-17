#include<stdio.h>
void main()
{

char c;
while('x'!=c){
    printf("\n Enter the character ( to exit type'x')");
    c=getchar();
    printf(" \n you have  entered %c",c);

}

printf("\n you have exited");

}
