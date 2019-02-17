/* display menu option and choce number  */
#include<stdio.h>
void main()
{
    int n,c;
    printf("1.square \n 2.cube \n 3.Equivalent Octel \n 4.Equivalent Hexadecimal\n5.all \n Enter the number 1/2/3/4/5:: ");
    scanf("%d",&c);
    printf("\nEnter the number::");
    scanf("%d",&n);
    if (c==1) {
        printf("\n the square::%d",n*n);

    }else if (c==2)
    {
        printf("\n the cube :: %d",n*n*n);

    }else if (c==3)
    {
        printf("\n the Equivalent Octel:%o ",n);

        }else if (c==4)
        {
            printf("\n Equivalent Hexadecimal:%x",n);
        }
        else if (c==5)
        {
                  printf("\n the square::%d",n*n);
                          printf("\n the cube :: %d",n*n*n);
                                  printf("\n the Equivalent Octel:%o ",n);
            printf("\n Equivalent Hexadecimal:%x",n);

        }
        
        else
        {
            printf("\n choice is Invalid ");
        }
}