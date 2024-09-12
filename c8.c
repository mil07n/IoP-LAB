#include <stdio.h>
#include <unistd.h>

int main()
{
    long seconds;
    int days,hours,minutes;
    seconds = 31558150;
    printf("The Earth takes a period of revolution of 31558150 seconds.\n");
    days = seconds/86400;
    seconds%=86400;
    hours = seconds/3600;
    seconds%=3600;
    minutes = seconds/60;
    sleep(1);
    printf("Converting Total Seconds in Days, hours, minutes format...");
    sleep(1);
    printf("\nThe Earth takes a period of revolution of %d days, %d hours, and %d minutes.",days,hours,minutes);

}