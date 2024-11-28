#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *a[10], *b[10], *multi[10], i, j, sum = 0;
    for (i = 0; i < 3; i++)
    {
        a[i] = (int *)malloc(3 * sizeof(int));
        b[i] = (int *)malloc(3 * sizeof(int));
        multi[i] = (int *)malloc(3 * sizeof(int));
    }
    printf("value in the matrix a\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", (*(a + i) + j));
        }
    }
    printf("matrix a \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
        printf("%d ", *(*(a + i) + j));
        }
        printf("\n");
    }
    printf("value in the matrix b\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", (*(b + i) + j));
        }
    }
    printf("matrix b \n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", *(*(b + i) + j));
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum = sum + (*(*(a + i) + k)) * (*(*(b + k) + j));
            }
            *(*(multi + i) + j) = sum;
            sum = 0;
        }
    }
    printf("product of matrices A and B:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", *(*(multi + i) + j));
        }
        printf("\n");
    }
    return 0;
}