/* menu disply option like addtion substraction multiplication division in for of  menu*/
#include <stdio.h>
void main()
{
    int a,b,c,an;
    printf("enter the two number :: ");
    scanf("%d%d",&a,&b);
    printf ("1.Addition \n 2.substraction \n 3.multipicition \n 4.Division\n 5.Rimander \n 6.all \n");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        printf("Addion is ::%d \n",a+b);
        break;
        case 2:
        printf("Substraction  is:: %d \n ",a-b);
        break;
        case 3:
        printf("Multiplication is :: %d",a*b);
        break;
        case 4:
        printf("Division is :: %d \n",a/b);
        break;
        case 5:
        printf("Rimander is :: %d \n",a%b);
        break;
        case 6: 
           printf("Addion is ::%d \n Substraction  is:: %d \n Multiplication is :: %d \n Division is :: %d \n Rimander is :: %d \n",a+b,a-b,a*b,a/b,a%b);
        break;
        default:
        printf("invalid option selected");
        break;
    }

}