#include <stdio.h>

#define BV(x) (1 << x)

int checkbit(int x, int p, int n)
{
    while(n--)
    {
        if((BV(p) & x) == 0)
            return 0;
        p--;
    }
    return 1;
}

int main(void)
{
    unsigned int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int p, x;
    printf("Enter starting position and no of positions: ");
    scanf("%d%d", &p, &x);
    int t = checkbit(n, p, x + 1);
    t ? printf("True\n") : printf("False\n");
}