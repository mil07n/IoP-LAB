#include <stdio.h>
void main()
{
    int a;
    printf("Enter number:");
    scanf("%d", &a);
    if (a%2==0)
        printf("The number is even");
    if (a%2!=0)
        printf("The number is odd");
}