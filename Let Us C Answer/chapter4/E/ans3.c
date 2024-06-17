#include <stdio.h>

int main(void)
{
    int a, b, c, g;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    g = (a >= b && a >= c) ? a : (b >= a && b >= c) ? b : c;
    printf("Greatest Number is: %d", g); 
}