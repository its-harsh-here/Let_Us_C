#include <stdio.h>

#define BV(x) (1 << x)

void showbits(int n)
{
    for(int i = 31; i >= 0; i--)
    {
        if (BV(i) & n)
            printf("1");
        else 
            printf("0");
    }
    printf("\n");
}

int main(void)
{
    unsigned int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    showbits(n);
}