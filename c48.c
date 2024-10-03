#include<stdio.h>
void main()
{
    int a,j;
    printf("Enter number of rows \n");
    scanf("%d",&a);
    for(int i=1;i<=a;i++)
    {  
        for(j=1;j<=a-i;j++)
        {
            printf(" ");
        }
        for(int k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        
        printf("\n");


    }
}