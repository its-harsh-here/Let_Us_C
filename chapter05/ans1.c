#include <stdio.h>

int main(void)
{
    for(int i = 1; i <= 10; i++)
    {
        int h = 0;
        printf("Enter total hours worked by person %d: ", i);
        scanf("%d", &h);
        if (h <=40)
            printf("Overtime Pay is 0\n");
        else
            printf("Overtime Pay: %d\n", 12 * (h-40));
    }    
}