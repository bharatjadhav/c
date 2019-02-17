#include<stdio.h>
void main()
{//lower to upercase
    char a,b;
    printf("enter a character lower case \n");
    printf("enter a character upper case \t");
    scanf("%c %c",&a,&b);  
    
    

    a-=32; //ascii  code substeacton  
printf("Upper case chater:: %c \n",a);

// upper to lower
    
    b+=32; //ascii coed addion 

    printf("Upper case chater:: %c \n",b);
}