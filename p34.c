/* printing multiple of 5 from 1 to postion enter by user */
#include <stdio.h>
void main()
{
    int i = 0, p = 0;
    printf("Enter the postion ::\t");
    scanf("%d", &p);
    for (int i = 5; i <= p; i += 5)
    {
        printf("\n %d ", i);
    }
}