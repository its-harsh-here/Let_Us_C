#include <stdio.h>

int fact(int n)
{
    int c = 1;
    while(n > 1)
    {
        c *= n;
        n--;
    }
    return c;
}

void prime(int n)
{
    int i = 2;
    for(; i < n; i++)
    {
        if(n%i == 0)
        {
            printf("Not Prime!\n\n");
            break;
        }
    }
    if (i == n)
        printf("Prime!\n\n");
}

void odd(int n)
{
    n % 2 == 0 ? printf("Even!\n\n") : printf("Odd!\n\n");
}

int main(void)
{
    while(1)
    {
        int n, a;
        printf("1. Factorial of a number\n2. Prime or not\n3. Odd or even\n4. Exit\n\n");
        scanf("%d", &n);
        if (n == 4)
            return 0;
        scanf("%d", &a);
        switch(n)
        {
            case 1:
                printf("%d\n\n",fact(a));
                break;
            case 2:
                prime(a);
                break;
            case 3:
                odd(a);
                break;
            default:
                printf("Invalid Input!\n\n");
        }
    }
}