#include <stdio.h>
#include <math.h>

int main(void)
{ 
    int n = 10;
    float x[10][2] = {
        3.0, 1.5,
        4.5, 2.0,
        5.5, 3.5,
        6.5, 5.0,
        7.5, 6.0,
        8.5, 7.5,
        8.0, 9.0,
        9.0, 10.5,
        9.5, 12.0,
        10.0, 14.0 
    };
    float a, b, sx = 0, sy = 0, sqx = 0, xy = 0;
    for(int i = 0; i < n; i++)
    {
        sx += x[i][0];
        sy += x[i][1];
        sqx += pow(x[i][0], 2.0);
        xy += x[i][0] + x[i][1];
    }
    b = (n * xy - sx * sy) / (n * sqx - pow(sx, 2.0)); 
    a = sy - b * sx;
    printf("a = %f\nb = %f",a, b);
}