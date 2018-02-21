#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n,a[100],temp;
printf("\n enter the number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&n);
}
for(j=i+1;j<=n;j++)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
printf("\n the number is",a[0]);
getch();
}
