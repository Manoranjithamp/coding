#include<stdio.h>
int main()
{
int *p,*q,n,i,c;
scanf("%d %d",&n,&i);
*p=&n;
*q=&i;
c=*p+*q;
printf("%d",c);
}
