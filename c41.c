#include<stdio.h>

int main()
{
    int num, b;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (b = 2; b < num; b++)
      {
        if (num % b == 0) 
        {
            printf("The factor of number is %d\n",b);
            //break;
        }
      }

  if (b == num) 
    {
        printf("Prime\n");
    } else 
    {
        printf("Not Prime\n");
    }
    return 0;
}