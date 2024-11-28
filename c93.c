#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    printf("string: ");
    fgets(str,sizeof(str),stdin);
    char *ptr = str;
    int word_count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == ' ')
        {
        ptr++;
        }
        else
        {
        word_count++;
        while (*ptr != ' ' && *ptr != '\0')
        {
        ptr++;
        }
        }
    }
    if (str[strlen(str) - 1] == '\n')
    {
    word_count--;
    }
    printf("Number of words: %d\n", word_count);
    return 0;
}