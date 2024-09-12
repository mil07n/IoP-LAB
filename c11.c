#include <stdio.h>
int main()
{
    int seconds,hours,minutes,s;
    printf("Enter time in total seconds: ");
    scanf("%d",&seconds);
    hours = seconds/3600;
    minutes = (seconds - (3600*hours))/60;
    s = (seconds - (3600*hours)-(60*minutes));
    printf("Time is: %d:%d:%d", hours,minutes,s);
    return 0;
}