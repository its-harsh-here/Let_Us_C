#include <stdio.h>

int main (void)
{
    for (int i  = 1; i <= 500; i++)
    {
        int n = i;
        int a = 0, b = 0;
        while (n > 0)
        {
            b = n % 10;
            a += b * b * b;
            n /= 10;
        }
        if (i == a)
            printf("%d\n", i);
    }  
}