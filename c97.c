#include<stdio.h>
#include<string.h>
int main()
{
    char string[100];
    int vowelcount =0;
    printf("string: ");
    gets(string);
   char *ptr = string;
   while(*ptr != '\0')
   {
    switch(*ptr)
    {
    case 'a': 
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U': vowelcount++;
    }
    ptr++;
   }
   printf("%d",vowelcount);
   return 0;
}