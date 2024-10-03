#include <stdio.h>

int main()
{
    float i, n, factorial=1, j, sum;
    printf("Enter the number till series wanted:");
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        if(i<n)
        {
        printf("%.0f/%.0f!+",i,i);
        }
        else
         printf("%.0f/%0.f!",i,i);
    }
}