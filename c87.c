#include <stdio.h>
int findLength(char str[]);
int main() {
    char text[100]; 
    printf("Line of text:");
    fgets(text, sizeof(text), stdin);  
    int length = findLength(text);
    printf("Length of text is: %d\n", length);
    return 0;
}
int findLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}