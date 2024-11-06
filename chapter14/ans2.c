#include <stdio.h>

int max(int a[][5])
{
    int c = 0;
    for(int i = 0, j = 0; i < 5; j++)
    {
        if (a[i][j] > c)
            c = a[i][j];
        if (j == 4)
        {
            i++;
            j = -1;
        }
    }
    return c;
}

int main(void)
{
    int a[5][5];
    for(int i = 0; i < 5; i ++)
    {
        for(int j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    }
    printf("%d", max(a));
}