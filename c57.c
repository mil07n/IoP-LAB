#include <stdio.h>
int main()
{
	int i,n,a[n],max,second_max;
	printf("no. of numbers:\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("number:\n");
		scanf("%d",&a[i]);
	}
	max=a[1];
	second_max=a[1];
	for(i=1;i<=n;i++)
	{
	if(a[i]>max)
	{
		second_max=max;
		max=a[i];
	}
	else if(a[i]>secon_max)
	{
		second_max=a[i];
	}
	}
	printf("max=%d\n",max);
	printf("sec_max=%d",second_max);
}