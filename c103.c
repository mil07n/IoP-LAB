#include<stdio.h>
#define big(a,b)  ((a)>(b)?(a):(b))
int main()
{   int num1,num2;
    printf("number 1: ");
    scanf("%d",&num1);
    printf("number 2: ");
    scanf("%d",&num2);
    int result = big(num1,num2);
    printf("%d is the biggest number",result);
    return 0;
}