#include <stdio.h>

int main(void)
{
    int a,b,c;
    printf("Enter 3 angles: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b + c == 180)
        printf("The three angles form a triangle!\n");
    else 
        printf("The three angles don't form a triangle!\n");
}