#include<stdio.h>
int main()
{
int f1,f2,rem,i;
printf("enter first number",f1);
scanf("%d",&f1);
printf("enter  second num",f2);
scanf("%d",&f2);
printf("the interval between %d and %d is"f1,f2);
for(i=f1+1;i<f2;++i)
{
rem=i%2;
if(rem==0)
{
printf("\n%d",i);
}
}
return 0;
}
