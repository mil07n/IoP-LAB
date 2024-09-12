#include<stdio.h>
int main()
{
int n,i=0,maxn,secondmax,N;
printf("enter the amount of numbers: \t");
scanf("%d",&N);
printf("enter your number: \t");
scanf("%d",&maxn);
for(int n;i<=n;i++)
{
printf("enter your number: \t");
scanf("%d",&n);
if(maxn>n)
{
if(n>secondmax)
{
printf("%d is Max and %d is second max",maxn,n);
break;
}
if (secondmax>n)
{
printf("%d is Max and %d is second max",maxn,secondmax);
break;
}
else if(n>maxn)
{
maxn=secondmax;
printf("%d is Max and %d is second max",n,maxn);
}
}
}
return 0;
}
