#include <stdio.h>

void binary(int n)
{
    if (n == 0)
    {
        printf("\n");
        return;
    }
    binary(n/2);
    printf("%d", n%2);
}


int main(void)
{
    int n;
    scanf("%d", &n);
    binary(n);
    binary(2*(n));
}