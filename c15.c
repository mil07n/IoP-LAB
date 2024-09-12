#include<stdio.h>

int main(void)
{
    float percentage,maths,iop,eng,CS,ENA,total;
    printf("Enter maths marks:\n");
    scanf("%f",&maths);
    printf("Enter iop marks:\n ");
    scanf("%f",&iop);
    printf("Enter English marks:\n");
    scanf("%f",&eng);
    printf("Enter CS marks:\n");
    scanf("%f",&CS);
    printf("Enter ENA marks:\n");
    scanf("%f",&ENA);
    total = maths + iop + eng + CS + ENA;
    percentage = (total/500)*100;
    if (percentage>=60 && percentage<=100) {
        printf("First Division");
    }
    else if (percentage>=50 && percentage<=59.90) {
        printf("Second Division");
    }
    else if (percentage>=30 && percentage<=49.90) {
        printf("Third Division");
    }
    else {
        printf("FAIL");
    }
    return 0;
}