#include <stdio.h>

int main(void)
{
    float b, hr, d;
    printf("Basic Salary: ");
    scanf("%f", &b);
    d = 0.4 * b;
    hr = 0.2 * b;
    printf("Gross Salary: %f\n", b + hr + d);
}