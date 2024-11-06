#include <stdio.h>

int rec(int n)
{
    if (n == 0)
        return 0;
    int f = 0;
    f += n % 10 + rec(n/10);
    return f;
}

int main(void)
{
    int a;
    scanf("%d", &a);
    printf("%d", rec(a));
}