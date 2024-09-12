#include<Stdio.h>
int main()
{
int n,i=0,maxn,minn,N; 
printf("enter the Numbers: \n");
scanf("%d",&N);
printf("enter 1st number: \n");
scanf("%d",&maxn);
printf("enter 2nd number: \n");
scanf("%d",&minn);
for(int i=0;i<=n;i++)
{
printf("enter numbers: \n");
scanf("%d",&n);
if(maxn>n&&minn<n)
{
printf("%d is greatest and %d is smallest",maxn,minn);
break;
}
if(n>maxn&&maxn<minn)
{
printf("%d is greatest and %d is smallest",n,maxn);
break;
}
if(n<minn&&maxn>minn)
{
printf("%d is greatest and %d is smallest",maxn,n);
break;
}
}
return 0;
}