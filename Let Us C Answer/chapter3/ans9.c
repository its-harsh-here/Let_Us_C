#include <stdio.h>

int main(void)
{
    int l, b;
    printf("Enter length and breadth of a rectangle: ");
    scanf("%d %d", &l, &b);
    int a = l * b;
    int p = 2 * (l + b);
    if (a > p)
    {
        printf("Area of rectangle is greater than Perimeter of rectangle\n");
        return 0;
    }
    printf("Area of rectangle is less than Perimeter of rectangle\n");
}