#include <stdio.h>

int main(void)
{
    int y;
    printf("Enter Year: ");
    scanf("%d", &y);
    if (y % 4 == 0)
        printf("%d is a leap year\n", y);
    else
        printf("%d is not a leap year\n", y);
}