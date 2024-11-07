#include <math.h>
#include <stdio.h>

int main(void)
{
    int a;
    printf("Enter an angle(in radians): ");
    scanf("%d", &a);
    printf("Sin(%d) = %f Radians\n", a, sin(a));
    printf("Cos(%d) = %f Radians\n", a, cos(a));
    printf("Tan(%d) = %f Radians\n", a, tan(a));
    printf("Cot(%d) = %f Radians\n", a, 1 / tan(a));
    printf("Sec(%d) = %f Radians\n", a, 1 / cos(a));
    printf("Cosec(%d) = %f Radians\n", a, 1 / sin(a));
}