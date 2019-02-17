//program to add the number till user enters 100.
#include <stdio.h>
void main()
{
    int a = 0, s = 0;
    do
    {
        printf("\n ENTER THE NUMBER::");
        scanf("%d", &a);
        s = s + a;

    } while (s < 100);
    printf("the sum is :%d", s);
}