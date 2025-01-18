#include <stdio.h>

#define BV(x) (1 << x)

int main(void)
{
    unsigned int n;
    printf("Enter 8-bit number: ");
    scanf("%d", &n);
    if(n > 255)
    {
        printf("Invalid Input!");
        return 1;
    }   
    int x = 2, a[] = {3, 5};
    for(int i = 0; i < x; i++)
    {
        if((BV(a[i] - 1)) & n)
            n &= ~BV(a[i] - 1);
    }
    printf("%d\n", n);
    return 0;
}