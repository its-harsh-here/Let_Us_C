#include <stdio.h>
#include <math.h>

int main(void)
{
    float a;
    printf("Enter an angle: ");
    scanf("%d", &a);
    while (a > 360)
        a /= 360;    
    a = a * 0.0174533;
    (sin(a)*sin(a) + cos(a)*cos(a) == 1) ? printf("Sum of sine and cosine of this angle is 1!\n") :
    printf("Sum of sine and cosine of this angle isn't 1!\n");
}