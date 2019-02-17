/* print the number 1 to 10 */
#include <stdio.h>
void main()
{
    int k= 0,n;
    printf("Enter the number ::");
    scanf("%d",&n);
    while (n>= k)
    {
        printf("\n %d", k);
       

        if (k%2==0)
    {
        printf(" \t Even %d", k);
     

    }
    else
   
    
    {
      printf("\t odd %d", k);
   
    }
        ++k; 
    }
    
}