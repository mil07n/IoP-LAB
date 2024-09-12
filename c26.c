#include <stdio.h>
int main()
{
    int N,num,sum_odd=0,sum_even=0;
    printf("enter the value of num:\n");
    scanf("%d",&num);
    N=num;
    while(num>=1)
    {
        if(num%2==0)
        {
            sum_even+=num;
            num--;
        }
        else
        {
            sum_odd+=num;
            num--;
        }
    }
    printf("the sum of even numbers between 1 and %d :%d\n the sum of odd numbers between 1 and %d :%d",N,sum_even,N,sum_odd);
    return 0;
}