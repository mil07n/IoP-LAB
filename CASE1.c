#include <stdio.h>
#include <string.h>

void main()
{
    int length, flag;
    char w[100], temp;
    printf("Enter a Word:  ");
    gets(w);
    length = strlen(w);
    printf("ORIGINAL WORD : %s \n", w);
    for (int i = 0; i < length; i++)
    {
        if (w[i] < w[i + 1])
        {
            temp = w[i];
            w[i] = w[i + 1];
            w[i + 1] = temp;
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }
    }
    if (flag)
    {
        printf("NO POSSIBLE WORD\n");
    }
    else
    {
        printf("NEW WORD : %s", w);
    }