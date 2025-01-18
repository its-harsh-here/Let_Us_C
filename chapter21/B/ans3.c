#include <stdio.h>

#define BV(x) (1 << x)

int main(void)
{
    unsigned int n;
    printf("Enter unsigned 16-bit number: ");
    scanf("%d", &n);
    if(n > 65535)
    {
        printf("Invalid Input!");
        return 1;
    }   
    int a = n % 256, b = n / 256;
    int x = b + a * 256;
    printf("%d\n", x);
}