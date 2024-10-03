#include<stdio.h>
int main()
{
    int arr[10],sum=0;
       printf("Enter No.: \n");
    for(int i=0;i<10;i++)
    {
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}