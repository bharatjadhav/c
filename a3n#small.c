/* accept the 3 number and find out smallest number*/
#include <stdio.h>
void main()
{
    int a,b,c;
    printf("enter the three number::");
    scanf("%d%d%d",&a,&b,&c);
    if (a<b&&a<c) {
        printf("%d is small number",a);

    }
    else if (b<a&&b<c)
    {
        printf("%d is small number",b);

    }
    else if (c<a&&c<b)
    {
        printf("%d is small number",c);
        
    }
    
    
    
} 