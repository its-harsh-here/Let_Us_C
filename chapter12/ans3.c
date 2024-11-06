#include <stdio.h>
#include "areaperi.h"

int main(void)
{
    int a,b,c,x,y;
    printf("Enter Sides of a TRIANGLE: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("PERIMETER = %d\n", PERI(a,b,c));
    printf("AREA = %f\n",AREA(a,b,c));
    printf("Enter Length of SQUARE: ");
    scanf("%d", &x);
    printf("%d\n", SQUARE(x));
    printf("Enter Radius of CIRCLE: ");
    scanf("%d", &y);
    printf("%.2f\n", CIRCLE(y));
}