#include <stdio.h>

int main(void)
{
    int n, a;
    printf("Enter a digit number: ");
    scanf("%d", &n);
    printf("The reverse of this number is: ");
    while (n > 0)
    {
        a = n%10;
        n /= 10;
        printf("%d", a);
    }
}