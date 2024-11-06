#include <stdio.h>

int sum(int n)
{
    if (n == 0)
        return 0;
    int s = n + sum(n-1);
    return s;
}

int main(void)
{
    printf("%d", sum(25));
}