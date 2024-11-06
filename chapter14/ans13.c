#include <stdio.h>
#include <math.h>

main(void)
{
    int a[10][2];
    printf("Enter 10 Coordinates:\n");
    for(int i = 0; i < 10; i++)
        scanf("%d%d", &a[i][0], &a[i][1]);
    float c = 0;
    for(int i = 0; i < 9; i++)
        c += sqrt(pow(a[i + 1][0] - a[i][0], 2.0) + pow(a[i+1][1] - a[i][1], 2.0));
    printf("Distance Between first and last point of line is: %f", c);
}