#include<stdio.h>
int main()
{
int base,exponent;
long long result=1;
printf("enter a base num");
scanf("%d",&base);
printf("enter the exponent");
scaf("%d",&exponent);
while(exponent!=0)
{
result*=base;
--exponent;
}
printf("answer=lld",result);
return 0;
}
