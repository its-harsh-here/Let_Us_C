#include <stdio.h>
#include <math.h>

float fact(int n)
{
    float f = 1.0;
    for(int i = n; i > 1; i--)
        f *= i;
    return f;
}

void verify(int x,float *b)
{
    for(int i = 0; i < 10; i++)
        *b += pow(x, 2.0*i + 1.0) / fact(2*i+1);
}

int main(void)
{
    int x;
    float b;
    scanf("%d", &x);
    verify(x, &b);
    b == sinf(x) ? printf("T") : printf("F");
}