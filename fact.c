#include<stdio.h>
int main()
{
int fact=0,i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
fact=fact*i;
}
printf("%d",fact);
}
