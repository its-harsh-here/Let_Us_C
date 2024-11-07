#include <stdio.h>
#include <math.h>

float area(int *a, int *b, int *c)
{
    float s = (*a + *b + *c) / 2.0;
    float ar = sqrt(s * (s - *a) * (s - *b) * (s - *c));
    return ar;
}

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%.2f", area(&a, &b, &c));
}