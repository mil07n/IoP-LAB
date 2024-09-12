#include <stdio.h>
int main()
{
    float celcius, f;
    printf("Enter the of temperature in degree celcius");
    scanf("%f", &celcius);
    f = (celcius * 9 / 5) + 32;
    printf("the temperature in fahrenheit is %f", f);
    return 0;
}