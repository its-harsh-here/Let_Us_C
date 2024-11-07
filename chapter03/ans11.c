#include <math.h>
#include <stdio.h>

int main(void)
{
    int x, y, r, px, py, S;
    printf("Enter coordinates of the center of a circle: ");
    scanf("%d %d", &x, &y);
    printf("Enter Radius of the circle: ");
    scanf("%d", &r);
    printf("Enter coordinates of a point: ");
    scanf("%d %d", &px, &py);
    S = sqrt((x - px) * (x - px) + (y - py) * (y - py));
    if (S < r)
    {
        printf("Point Lies Inside the Circle\n");
        return 0;
    }
    else if (S == r)
    {
        printf("Point Lies On the Circle\n");
        return 0;
    }
    printf("Point Lies Outside the Circle\n");
}