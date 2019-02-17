/* the table(पाद)of number*/
#include<stdio.h>

void main()
{
int n=1,d=1;
int i=1;
//'printf("enter the number:");
//scanf("%d",&d);
do {
    
  do {
        
            printf("\t %d",n*i);

        
        i++;
    }
      while (i<=10);
    printf("\n ");
    i=1;
    n++;
}while (n<=99999999999);


}