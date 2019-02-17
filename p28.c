#include <stdio.h>
void main()
{
    int s = 0, r = 0, a = 0;
    printf("Enter the number::");
    scanf("%d", &a);
    printf("\n Reverse of a number:: ");

    while (0 != a)
    {
        r = a % 10;
        printf("%d", r);
        s = s + r;

        a = a / 10;
    }

    printf("\n The sume of digites is :%d", s);
}