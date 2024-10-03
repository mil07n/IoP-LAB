#include <stdio.h>
int main()
{
    int arr[10];
    int positive_count=0, negative_count=0, zero_count=0;
    printf("Enter 10 Numbers: \n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<10;i++)
    {
        if(arr[i]>0)
        {
        positive_count++;
        }
        if(arr[i]<0)
        {
        negative_count++;
        }
        if(arr[i]==0)
        {
        zero_count++;
        }
    }
    printf("The positive count is %d, The negative count is %d & The count of zeros is %d \n",positive_count,negative_count,zero_count);
    return 0;
}