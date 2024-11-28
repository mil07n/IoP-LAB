#include <stdio.h>
void amstrong(int num);
int main(){
    int num;
    printf("Enter number:  ");
    scanf("%d",&num);
    amstrong(num);
    return 0;
}
void amstrong( int num )
{
    int a,q,sum=0,flag;
    a=num;
    while ( a!=0)
    {
        q=a%10;
        sum=sum+q*q*q;
        a=a/10;
    }

    if (num == sum)
    {
        printf("%d is a amstrong number ",num);
    }
    else 
    {
        printf("%d is not a amstrong number ",num);
    }
}