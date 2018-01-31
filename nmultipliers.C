#include<stdio.h>
#include<conio.h>
void main()
{
longint sum=0,i,n;
clrscr();
printf("enter the n numbers");
scanf("%ld",&n);
for(i=1;i<=n;i++)
{
sum=n*i;
printf("\n 5*%ld=%ld");
}
getch();
}
