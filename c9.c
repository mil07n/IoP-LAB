#include <stdio.h>
int main()
{
    int hrs, min, sec, total;
    printf("Enter value of in hours, minutes and seconds\n");
    scanf("%d\n %d\n %d", &hrs, &min, &sec);
    total = hrs * 3600 + min * 60 + sec;
    printf("Total seconds are %d", total);
    return 0;
}