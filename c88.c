#include <stdio.h>
int main()
{
    int n;
    int arr1[n], arr2[n];
    printf("No. of elements: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
    printf("element %d : ", i);
    scanf("%d", arr1 + i);
    }
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    for (int i = 0; i < n; i++)
    {
        *(ptr2 + i) = *(ptr1 + i);
    }
    printf("Elements in arr2:\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", *(arr2 + i));
    }
    return 0;
}