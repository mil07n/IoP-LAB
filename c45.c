#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int max=100,min=1,i,guess, number;
    srand(time(0));
    number = rand() % max + min;
    while (1)
    {
        printf("<<<< GUESS A NUMBER BETWEEN 1 & 100 >>>> \n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Too high! Try again -->\n");
        }
        else if (guess < number)
        {
            printf("Too low! Try again --> \n");
        }
        else
        {
            printf("Congratulations! You guessed the correct number: %d\n", number);
            break;
        }
    }
    return 0;
}