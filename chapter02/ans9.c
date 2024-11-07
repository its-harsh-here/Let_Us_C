#include <stdio.h>

int main(void)
{
    int a, s;
    printf("Enter Amount: ");
    scanf("%d", &a);
    s = a / 100 + (a % 100) / 50 + ((a % 100) % 50) / 10 + (((a % 100) % 50) % 10) / 5 + ((((a % 100) % 50) % 10) % 5) / 2 + ((((a % 100) % 50) % 10) % 5) % 2;
    printf("Total Number of Notes Required: %d\n", s);
}