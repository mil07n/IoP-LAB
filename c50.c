#include<stdio.h>
void main()
{
    int n,c=65;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    { 
        for(int j=1;j<=i;j++)
        {
        printf("%c",c);
        }
        c=c+1;
        printf("\n");
    }
}