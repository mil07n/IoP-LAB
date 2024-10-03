#include <stdio.h>
int main()
{
	int x[10],y[10],z[10];
    int i;
	for(i=0;i<10;i++)
	{
		printf("enter value:");
		scanf("%d",&x[i]);
        printf("enter value:");
		scanf("%d",&y[i]);
        z[i] = x[i] + y[i];
        printf("Sum:%d\n",z[i]);

    }
}