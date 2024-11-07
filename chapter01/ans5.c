#include <stdio.h>
#define pi 22/7.0//compile time constants 

int main(void)
{
    int l, b;
    float r;
    printf("Enter Length and Breadth of Rectangle: ");
    scanf("%d %d", &l, &b);
    printf("Enter Radius of Circle: ");
    scanf("%f", &r);
    printf("Perimeter of Rectangle: %d\nAread of Rectangle: %d\n", 2*(l + b), l * b);
    printf("Circumference of Circle: %f\nArea of Circle: %f\n", 2*pi*r, pi*r*r);
}

