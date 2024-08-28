#include <stdio.h>
#include <stdlib.h>

void prime(int n)
{
    if(n == 1)
        exit(0);
    for(int i = 2;;i++)
    {
        if(n % i == 0)
        {
            printf("%d ", i);
            prime(n/i);
        }
    }
}
int main(void)
{
    int n;
    scanf("%d", &n);
    prime(n);
    return 0;
}