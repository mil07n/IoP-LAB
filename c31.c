#include<stdio.h>
int main()
{
int a,b,sum=0,sum1=0;
printf("Put number \n");
scanf("%d",&a);
while(a!=0)
{
b=a%10;
sum=sum+b;
a=a/10;
}
printf("the sum of digits is %d \n",sum);
return 0;
}