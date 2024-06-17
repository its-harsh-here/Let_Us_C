#include <stdio.h>

int main(void)
{
    float fa,c;
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f", &fa);
    c = ((fa - 32) * 5) / 9;
    printf("Temperature in Centigrade: %f\n", c);
}