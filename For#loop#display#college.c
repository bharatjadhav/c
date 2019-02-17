/* Accept college name and print it twinty times*/
#include<stdio.h>
void main()
{
    char cn[20];
    int i=0;
    printf("Enter the name of college::");
    scanf("%s",cn);
    for(int i = 0; i < 20 ; i++)
    {
        printf("\n %s",cn);
    }
    
}