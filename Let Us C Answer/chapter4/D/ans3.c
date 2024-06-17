#include <stdio.h>

int main (void)
{
    int a, b, c;
    printf("Enter sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    
    int s, l;
    if (a > b && a > c)
        l = a;
    else if (b > a && b > c)
        l = b;
    else if (c > a && c > b)
        l = c;
    else 
    {
        printf("The given triangle is valid!\n");
        return 0;
    }
    s = a + b + c - l;
    if (s > l)
        printf("The given triangle is valid!\n");
    else
        printf("The given triangle is invalid!\n");
}