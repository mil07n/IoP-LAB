#include <stdio.h>
int main() {
    char operator;
    int a,b;
    printf("Enter operation (+,-,*,/):");
    scanf("%c",&operator);
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    switch(operator) {
        case '+':
            printf("%d + %d = %d",a,b,a+b);
        break;
        case '-':
            printf("%d + %d = %d",a,b,a+b);
        break;
        case '*':
            printf("%d * %d = %d",a,b,a*b);
        break;
        case '/':
            printf("%d / %d = %d",a,b,a/b);
        break;
        default:
            printf("Invalid operation");
    }
}