#include <stdio.h>
#include <math.h>

int main(void)
{
    int n;
    float m = 0;
    printf("Enter Number of Plots: ");
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
    {
        printf("\nPLOT %d\n", i);
        float a, b, t;
        printf("Enter values of a, b and angle: ");
        scanf("%f%f%f", &a, &b, &t);
        float area = 1/2.0 * a * b  * sin(t);
        printf("Area of Plot %d: %.2f\n", i, area);
        if(area > m)
            m = area;
    }
    printf("\nLargest Area: %.2f", m);
}