#include <stdio.h>

int main(void)
{
    int y;
    printf("Enter Year: ");
    scanf("%d", &y);
    if(y % 4 == 0 && y>0)
        printf("This is a leap year\n");
    else if(y > 0)
        printf("This isnt a leap year\n");
    else 
        printf("Years can't be negative\n");
}