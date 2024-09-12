#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    int asciiValue = (int)c;
    printf("%d\n", asciiValue);
}