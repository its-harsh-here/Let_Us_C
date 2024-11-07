#include <stdio.h>

int main(void)
{
    float km, m, ft, inches, cm;
    printf("Enter Distance(in km): ");
    scanf("%f", &km);
    m = 1000 * km;
    ft = 3280.84 * km;
    inches = 39370.08 * km;
    cm = 100000 * km;
    printf("Meter: %f\nFeet: %f\nInches: %f\nCentimeter: %f\n", m, ft, inches, cm);        
}