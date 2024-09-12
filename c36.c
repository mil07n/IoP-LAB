#include<stdio.h>
int main()
{
int n,a;
printf("enter the number you want to see the odd numbers till \t");
scanf("%d",&n);
for(int a=1;a<=n;a=a+2)
{
printf("%d \n",a);
}
return 0;
}