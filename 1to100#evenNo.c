/* Display even numbers from 1 to 100 */
#include <stdio.h>
void main()
{
    int i = 0, sum = 0, sum1 = 0, p = 0; // p for poston of number
    printf("Enter the postion ::");
    scanf("%d", &p);

    for (int i = 0; i <= p; i++)
    {
        if (i % 2 == 0)
        {
            printf("%d \t", i);
            sum = sum + i;
        }
        sum1 = sum1 + i;
    }

    printf("\n Sum of 0 to %d even numbers =: %d \t", p, sum);
    printf("\n Sum of 0 to %d  numbers =: %d \t", p, sum1);

    //-----------------------------------------------------------------------------------------
    //printing series of 2,6,12,30,42,...using for loop
    p = 0;
    printf("\n Enter the postion ::");
    scanf("%d", &p);

    for (int i = 1; i <= p; i++)
    {
        printf("%d \t", (i * i) + i);
    }

    //----------------------------------------------------------------
    //find the postive,negative and zeros
    int c1 = 0, c3 = 0, c2 = 0, no = 0;
    p = 1;
    printf("\n Enter the postion ::");
    scanf("%d", &p);
    for (int i = 1; i <=p; i++)
    {
        no = 0;
        printf("\n Enter number: ::");
        scanf("%d", &no);
        if (no == 0)
        {
            c1++;
        }
        else if (no > 0)
        {
            c2++;
        }
        else if (no < 0)
        {
            c3++;
        }
    }
    printf("\t zeros:= %d \n positive number:=%d \n negative number:=%d \n", c1, c2, c3);
}