#include<stdio.h>
void main()
{ int a,b,c;

float hra =1.0,da =1.0,ta =1.0,gs =1.0 ,ab =1.0,pf = 200.0 ,es =1.0; 
printf("Enter the basic salary \t");
scanf("%f",&ab);
hra = (50 * ab)/100;
da =(25 * ab )/100;
ta =(5 * ab)/100;
gs = ab + hra + da +ta;
es = gs - pf;
printf(" \n HRA \t %f \n DA \t %f \n TA \t %f \n Pf \t %f  \n GS \t %f \n Net salary \t %f",hra,da,ta,pf,gs,es);

}
/* 
Enter the basic salary 5000

 HRA     2500.000000
 DA      1250.000000
 TA      250.000000
 Pf      200.000000
 GS      9000.000000
 Net salary      8800.000000 */