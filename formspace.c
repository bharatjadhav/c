#include <stdio.h>
void main ()
{
int acno;
float interest=0.0;
char actype,name[20];
int deposit;
printf("\n  ENTER ACCOUNT NUMBER & MEMBER NAME");
scanf("%d %s",&acno,&name);

printf("\n  ENTER Deposit & intrest");
scanf("%d %f",&deposit,&interest);
printf("A/C No:%d\tName-%s\tDeposit-%d \t intrest %f",acno,name,deposit,interest);

}