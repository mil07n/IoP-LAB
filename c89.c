#include <stdio.h>
int main()
{
    int n;
    printf("No. of elements: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr1 + i);
    }
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    for (int i = 0; i < n; i++)
    {
        *(ptr2 + i) = *(ptr1 + n - 1 - i);
    }
    printf("\narray in reverse:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(ptr2 + i));
    }
    return 0;
}