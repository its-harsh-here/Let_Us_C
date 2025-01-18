#include <stdio.h>

#define BV(x) (1 << x)

int main(void)
{
    unsigned int n;
    printf("Enter unsigned 8-bit number: ");
    scanf("%d", &n);
    if(n > 256)
    {
        printf("Invalid Input!");
        return 1;
    }   
    int a = n % 16, b = n / 16;
    int x = b + a * 16;
    printf("%d\n", x);
}