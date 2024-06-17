#include <stdio.h>
#include <math.h>

int main(void)
{
    int a, b, c, l, s;
    printf("Enter sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
    {
        printf("The triangle is an EQUILATERAL triangle\n");
        return 0;
    }
    else if (a > b && a > c)
    {    
        l = a;
        s = b * b + c * c;
    }
    else if (b > a && b > c)
    {
        l = b;
        s = a * a + c * c;
    }
    else if (c > a && c > b)
    {    
        l = c;
        s = a * a + b * b;
    }
    int n = a + b + c - l;
    if ((a == b || b == c || c == a) && l == sqrt(s))
        printf("The triangle is an RIGHT ANGLED ISOSCELES triangle\n");
    else if ((a == b || b == c || c == a))
        printf("The triangle is an ISOSCELES triangle\n");
    else if (l == sqrt(s))
        printf("The triangle is a RIGHT ANGLE triangle\n");
    else if (n > l)
        printf("The triangle is an is a scalene triangle\n");
    else
        printf("The triangle DOESN'T EXSIST\n");
}