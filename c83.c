#include <stdio.h>
int findMax(int arr[], int size);
int main() 
{
    int n, max;
    printf("No. of elements in array: ");
    scanf("%d", &n);
    int arr[n];   
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
    }
    max = findMax(arr, n);
    printf("The maximum value in array: %d\n", max);
    return 0;
}
int findMax(int arr[], int size) 
{
    int max = arr[0]; 
    for (int i = 1; i < size; i++) 
    {
        if (arr[i] > max) 
        {
    max = arr[i];  
        }
    }
    return max;
}