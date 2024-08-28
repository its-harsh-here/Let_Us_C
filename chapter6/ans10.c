#include <stdio.h>

void ram(int n)
{
    int c = 0;
    int a, b, x, y;
    for(int i = 1; i*i*i < n; i++)
    {
        for(int j = 0; j*j*j + i*i*i <= n; j++)
        {       
            if (j*j*j + i*i*i == n)
            {
                if(c == 0)
                {
                    x = i;
                    y = j;
                }
                else if(c == 1)
                {
                    a = i;
                    b = j;
                }
                c++;
            }
        }
    }
    if(c == 4)
    {
        printf("%d^3 + %d^3 = %d\n", a, b, n);
        printf("%d^3 + %d^3 = %d\n\n", x, y, n);
    }
}

int main(void)
{
    for(int i = 1; i <= 24000000000; i++)
        ram(i);
}