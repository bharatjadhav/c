#include <stdio.h>
void main()
{
    float bs=1.0,da=1.0,ta=1.0,gs=1.0;
    printf ("Enter the basic salary \t");
    scanf("%f",&bs);
    da =(5 * bs)/100;
    ta =(15 * bs)/100;
    gs =bs +da+ta;
    printf("da %f \n ta = %f \n gs = %f",da,ta,gs);
}