#include <stdio.h>
#include <string.h>
int main() {
    char str[100], rev_str[100];
    printf("string: ");
    fgets(str, sizeof(str), stdin);
    char *ptr = str;
    char *rev_ptr = rev_str;
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        *rev_ptr = *(ptr + i);
        rev_ptr++;
    }
    *rev_ptr = '\0';
    printf("Original string: %s\n", str);
    printf("Reversed string: %s\n", rev_str);
    return 0;
}