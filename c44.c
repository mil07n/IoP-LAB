#include <stdio.h>
int main() {
    int units;
    float billAmount;

    printf("Enter the number of units consumed: ");
    scanf("%d",&units);

    if (units<= 200) {
        billAmount = units * 0.50;
    } else if (units <= 400) {
        billAmount = 100 + (units - 200) * 0.65;
    } else if (units <= 600) {
        billAmount= 230 + (units - 400) * 0.80;
    } else {
        billAmount = 425 + (units - 600) * 1.25;
    }

    printf("The total electricity bill amount is Rs. %f \n", billAmount);

    return 0;
}
