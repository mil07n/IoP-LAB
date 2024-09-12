#include<Stdio.h>
int main()
{
int a,b;
printf("enter the number you want even numbers till: \t");
scanf("%d",&a);
for(b=0;b<=a;b=b+2)
{
printf("%d \n",b);
}
return 0;
}