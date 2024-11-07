#include <math.h>
#include <stdio.h>

int main(void)
{
    int x,y;
    float r, theta;
    printf("Enter co-ordinate (x,y): ");
    scanf("%d %d", &x, &y);
    r = sqrt(x*x + y*y);
    theta = atan((float) y / x);
    printf("Polar co-ordinate (r, theta): (%f unit,%f radians)\n", r, theta);
}