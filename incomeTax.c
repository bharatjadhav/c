/* calculate the income tax */
#include<stdio.h>
void main()
{
    int i,it;
    char g;
    printf("enter the gender m/f :: ");
    scanf("%c",&g);
    printf("enter the income ₹ ::");
    scanf("%d",&i);
    if (g=='m') {
        if (100000<i) {
            it=(i-100000)*10/100;
            printf("income is %d And Income Tax is %d",i,it);
        }
        else
        {
            printf("income is %d And No income Tax",i);
        }
    }
    else if (g=='f')
    {
        if (135000<i) {
           it=(i-135000)*10/100;
            printf("income is %d And Income Tax is %d",i,it);
        }
        else
        {
            printf("income is %d And No income Tax",i);
        }
        
        
    }
    
}