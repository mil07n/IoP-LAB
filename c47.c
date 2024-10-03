#include <stdio.h>
int main()
{
    int  lines;
    printf("Enter the number of lines: ");
    scanf("%d",&lines);
    for (int i=1;i<=lines;i++)
    {
         for (char ch='A';ch<'A'+i;ch++)
         {
             printf("%c",ch);
         }
         printf("\n");
         }
    return 0;
}