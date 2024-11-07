#include <stdio.h>

int fact(int n)
{
    int f = 1;
    for(int i = 2; i <= n; i++)
        f *= i;
    return f;
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d", fact(n));
}