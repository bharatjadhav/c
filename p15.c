/* program to accept the type of travel and display fare for yhat type.*/
#include <stdio.h>
void main()
{
    char t;
    printf(" \n Bus(b)\n train(t)\n priavat car (c)\n by Air(a)\n Enter the choice b/t/c/a ");
    scanf("%c", &t);
    switch (t)
    {
    case 'b':
        printf("\n Bus fare is 450₹");
        break;
    case 't':
        printf("\n train  fare is 375₹");
        break;
    case 'c':
        printf("\n private car fare is 800₹");
        break;
    case 'a':
        printf("\n by Air fare is 1200₹");
        break;
    default:
        printf("\n Invalid option");
        break;
    }
}