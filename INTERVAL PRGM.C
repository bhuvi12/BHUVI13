#include<stdio.h>
void main()
{
int l,h,i,fg;
printf("enter two numbers");
scanf("%d%d",&l,&h);
printf("number between %d and %d",l,h);
while(l<h)
fg=0;
for(i=2;i<=l/2;++i)
{
if(l%i==0)
{
fg=1;
break;}
}
if(fg==0)
printf("%d',l);
++l;}
return 0;
}
