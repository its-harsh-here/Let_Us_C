#include <stdio.h>

int main(void)
{
    int c, f;
    printf("Enter class and no. of subjects a person failed in: ");
    scanf("%d %d", &c, &f);
    switch(c)
    {
        case 1:
            if (f <= 3)
            {
                printf("5 Grace Marks");
                break;
            }
        case 2:
            if (f <= 2)
            {
                printf("4 Grace Marks");
                break;
            }
        case 3:
            if (f <= 1)
            {
                printf("5 Grace Marks");
                break;
            }
        default:
            printf("No Grace Marks");
    }
}