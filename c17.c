#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter values of a,b and c\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d is greatest No.", a);
    }
    else if (b > c && b > a)
    {
        printf("%d is greatest No.", b);
    }
    else if (c > b && c > a)
    {
        printf("%d is    No.", c);
    }
    return 0;
}