#include <stdio.h>
int main()
{
    int a, b, i, ans = 1;
    printf("Enter base\n");
    scanf("%d", &a);
    printf("Enter power\n");
    scanf("%d", &b);
    for (i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    printf("%d", ans);
    return 0;
}