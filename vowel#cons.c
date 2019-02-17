/* accept the charater check vowel or consoant*/
#include<stdio.h>
void main()
{
    char a;
printf("enter the a charater ");
scanf("%c",&a);
if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
{
    printf("%c is vowel",a);


}
else
{
    printf("%c is consonant",a);

}


}
