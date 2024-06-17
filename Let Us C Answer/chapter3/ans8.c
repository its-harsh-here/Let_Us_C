#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n < 0)
    {
        printf("Absolute value of the number is %d", -n);
        return 0;
    }
    printf("Absolute value of the number is %d", n);
}