#include <stdio.h>
int main()
{
    int M, P, C, E, CM;
    printf("Enter your Maths, Physics & Chemistry marks out of 200 and external marks out of 100\n");
    scanf("%d %d %d %d", &M, &P, &C, &E);
    CM = M / 2 + P / 2 + C / 2 + E;
    printf("Your cut off marks are %d", CM);
    return 0;
}