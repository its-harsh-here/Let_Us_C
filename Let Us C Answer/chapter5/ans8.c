#include <stdio.h>

int main(void)
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    int i = 0;
    int b[9];
    while(a >= 1)
    {
        b[i] = a % 8;
        a /= 8;
        i++;
    }
    printf("Octal of the Number = ");
    while (--i >= 0)
        printf("%d", b[i]);
    printf("\n");
}