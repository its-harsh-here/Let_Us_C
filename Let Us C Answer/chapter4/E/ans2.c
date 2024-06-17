#include <stdio.h>

int main(void)
{
    int y;
    printf("Enter year: ");
    scanf("%d", &y);
    (y % 4 == 0) ? printf("Leap year!\n") : printf("Not a leap year!\n");
}