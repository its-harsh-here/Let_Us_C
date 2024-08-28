#include <stdio.h>

void calc(int *x, int *y, int *z, float *a, float *p)
{
    *a = (*x + *y + *z)/ 3.0;
    *p = *a;
}
int main(void)
{
    int a, b, c;
    float avg, per;
    scanf("%d %d %d", &a, &b, &c);
    calc(&a, &b, &c, &avg, &per);
    printf("Average: %.2f\nPercentage: %f", avg, per);
}