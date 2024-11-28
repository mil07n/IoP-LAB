#include <stdio.h>
int main() {
    int a[100], b[100], r, n, i, j, temp;
    printf("number of elements: ");
    scanf("%d", &r); 
    printf("elements:\n");
    for (i = 0; i < r; i++) {
        scanf("%d", &a[i]);
    }
    printf("number of rotations: ");
    scanf("%d", &n);  
    n = n % r;
    for (j = 0; j < n; j++) {
        temp = a[r - 1]; 
        for (i = r - 1; i > 0; i--) {
            a[i] = a[i - 1]; 
        }
        a[0] = temp; 
    }
    printf("Rotated array:\n");
    for (i = 0; i < r; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}