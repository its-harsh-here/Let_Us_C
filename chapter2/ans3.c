#include <stdio.h>
#include <math.h>

int main(void)
{
    int x, y, z;
    float s, a;
    printf("Enter length of sides of a triangle: ");
    scanf("%d %d %d", &x, &y, &z);
    s = (x + y + z) / 2.0;
    a = sqrt(s*(s-x)*(s-y)*(s-z));
    printf("Area of triangle: %f\n", a);
}