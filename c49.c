#include<stdio.h>
void main()
{
    int n;
    printf("Enter number of rows \n");
    scanf("%d",&n);
    for(int i=n;i>0;i--)
    {
        for(int j=1;j<i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=n-i+1;k++)
        {
            printf("* ");
        }
        printf("\n");
    }

}