#include <stdio.h>
#include <math.h>

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
    for(int i = 0; i < 8; i += 2)
    {
        if((BV(i) & n) == 0)
        {
            n += pow(2, i);
        }
    }
    printf("%d\n", n);
    return 0;
}