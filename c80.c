#include <stdio.h>
int fibo(int n)
{
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 2; i < n ; i ++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    printf("Fibonacci series:");
    for(int i = 0; i < n ; i ++)
    {
        printf("%d ",fib[i]); 
    }
}
int main(){
    int n;
    printf("No. of terms: \t");
    scanf("%d", &n);
    fibo(n);
}