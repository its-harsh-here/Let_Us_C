#include <stdio.h>
#include <math.h>

#define n 11

int main(void)
{
    float x[n], y[n], r;
    printf("Enter valyes of x, y:\n");
    float sx = 0, sy = 0, sqx = 0, sqy = 0, xy = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%f %f", &x[i], &y[i]);
        sx += x[i];
        sy += y[i];
        sqx += x[i] * x[i];
        sqy += y[i] * y[i];
        xy += x[i] * y[i];
    }
    r = (xy - sx * sy) / sqrt((n * sqx - pow(sx, 2.0)) * (n * sqy - pow(sy,2.0)));
    printf("Correlation coefficient r = %.2f", r);

}