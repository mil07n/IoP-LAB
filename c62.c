#include <stdio.h>
int main(){
    int arr[10];
    printf("Array:\n");
    for(int i=1;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Entered array:\n");
    for(int i=1;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nReversed array:\n");
    for(int i=9;i>0;i--)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}