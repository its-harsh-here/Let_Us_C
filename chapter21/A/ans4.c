#include <stdio.h>
#include <math.h>

#define BV(x) 1 << x

int main(void)
{
    int n, h = 0, m = 0, s = 0;
    printf("Enter Number: ");
    scanf("%d", &n);
    if(n > 65535)
    {
        printf("Invalid Input!");
        return 1;
    }
    for(int i = 0; i < 5; i++)
    {
        if(n & BV(i))
            s += pow(2, i);
    }
    for(int i = 5; i < 11; i++)
    {
        if(n & BV(i))
            m += pow(2, i - 5);
    }
    for(int i = 11; i < 16; i++)
    {
        if(n & BV(i))
            h += pow(2, i - 11);
    }
    printf("Time: %d:%d:%d\n", h, m, s);
}