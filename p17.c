#include <stdio.h>
void main()
{
    int a, b, c, ans, o;
    printf(" 1.odd or even\n 2.addion\n enter the option :: ");
    scanf("%d", &o);
    switch (o)
    {
    case 1:
        printf("Enter A number::");
        scanf("%d", &c);

        if (c % 2 == 0)
        {
            printf("%d is a even number", c);
        }
        else
        {
            printf("%d is odd number", c);
        }
        break;
    case 2:
        printf("Enter the two number :;");
        scanf("%d%d", &a, &b);
        printf("Additon is %d", a + b);
        break;
    default:
        printf("Invalid option");
        break;
    }
}