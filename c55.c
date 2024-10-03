#include <stdio.h>
int main()
{
    int arr[10],a=0,b=0;
    printf("Enter No.:\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            a=a+1;
        }
        else{
            b=b+1;
        }
    }
            printf("Odd No.: =%d \n",b);
        printf("Even No.: =%d",a);
    return 0;
}