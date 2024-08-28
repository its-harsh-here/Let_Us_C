#include <stdio.h>

int main(void)
{
    int c = 1;
    for(int i = 1; i <= 4; i++)
    {
        for(int j = 1; j <= 8 - 2 * i; j++)
            printf(" ");
        for(int k = 1; k <= i; k++)
        {
            printf("%d   ", c);
            c++;
        }
        printf("\n");
    }
}