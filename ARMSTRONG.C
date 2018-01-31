#include<stdio.h>
int main()
{
int num,originalnum,rem,result=0;
printf("enter a number");
scanf("%d",&num);
originalnum=num;
while(originalnum!=0)
{
rem=originalnum%10;
result+=rem*rem*rem;
originalnum/=10;
}
if(result==num)
printf("the num is amstrong");
else 
printf("the num is not armstrong");
return 0;
}
