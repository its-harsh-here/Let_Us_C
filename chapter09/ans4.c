#include <stdio.h>

void shift(int *a, int *b, int *c)
{
    int t = *a;
    *a = *b;
    *b = *c;
    *c = t;
}

int main(void)
{
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    shift(&x,&y,&z);
    printf("%d %d %d", x, y,z);
}