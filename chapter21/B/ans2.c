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
    int x = 3, a[] = {3, 6, 7};
    for(int i = 0; i < x; i++)
    {
        if((BV(a[i] - 1) & n) == 0)
        {
            printf("No!\n");
            return 0;
        }
    }
    printf("Yes\n");
    return 0;
}