/* using switch checking vowel*/
#include<stdio.h>
void main()
{
    char c;
    printf("enter a charater::");
    scanf("%c",&c);
    switch (c)
    {
        case 'a':case 'e':case 'i':case 'o':case 'u':
            printf("%c is vowel",c);
            break;
    
        default:
        printf("The %c is consonet",c);
            break;
    }
}