#include <math.h>
#include <stdio.h>

int main(void)
{
    float l1, l2, g1, g2, d;
    printf("Enter coordinates of Place A (latitude,longitude): ");
    scanf("%f %f", &l1, &g1);
    printf("Enter coordinates of Place B (latitude,longitude): ");
    scanf("%f %f", &l2, &g2);
    d = 3963 * acos(sin(l1) * sin(l2)+ cos(l1) * cos(l2) * cos(g2 - g1));
    printf("Distance between Place A and Place B is: %f Nautical Miles\n", d);
}