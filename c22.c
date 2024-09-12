#include <stdio.h>
int main()
{
    int a;
    int fact = 1;
    printf("Enter a number:");
    scanf("%d", &a);
    for (int i = 1; i <= a; ++i)
    {
        fact*=i;
    }
    printf("The factorial of %d is %d", a, fact);
    return 0;
}