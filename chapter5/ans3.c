#include <stdio.h> // Not using math.h as that is too simple ;)

int main(void)
{
    int a, n;
    printf("Enter a number(a): ");
    scanf("%d", &a);
    int b = a;
    printf("Enter power(n): ");
    scanf("%d", &n);
    if (n == 0 && a != 0)
    {
        printf("The value of a^n = 1");
        return 0;
    }
    else if (a == 0)
    {
        printf("The value of a^n = 0");
        return 0;
    }
    while(n > 1)
    {
        a *= b;
        n--;
    }
    printf("The value of a^n = %d\n", a);
}