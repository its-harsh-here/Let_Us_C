#include <stdio.h>

int main(void)
{
    int a[25], p = 0, n = 0, e = 0, o = 0;
    for(int i = 0; i < 25; i++)
    {
        scanf("%d", &a[i]);
        if(a[i] > 0)
            p++;
        else if (a[i] < 0)
            n++;
        a[i] % 2 == 0 ? e++ : o++;
    }
    printf("Positive: %d\nNegative: %d\nEven: %d\nOdd: %d\n", p, n, e, o);
}