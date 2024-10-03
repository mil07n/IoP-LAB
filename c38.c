#include <stdio.h>
int main()
{
int n,i;
i=1;
printf("Enter range of no.(limit):\t");
scanf("%d",&n);
while (i <= n)
{
    printf("%d\t", i*i );
    i++;
}
return 0;
}