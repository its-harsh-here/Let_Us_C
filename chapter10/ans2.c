#include <stdio.h>
#include <stdlib.h>

void rec(int n)
{
    if (n == 1)
        exit(0);
    for(int i = 2;; i++)
    {
        if (n % i == 0)
        {
            printf("%d ", i);
            n /= i;
            rec(n);
        }
    }
}

int main(void)
{
    int n;
    scanf("%d", &n);
    rec(n);
}