#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n % 2 == 0 )
        printf("The integer is Even\n");
    else
        printf("The integer is Odd\n");
}