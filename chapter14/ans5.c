#include <stdio.h>

void sum(int a[][6], int b[][6], int c[][6])
{
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
            c[i][j] = a[i][j] + b[i][j];
    }
}

int main(void)
{
    int a[6][6], b[6][6], c[6][6];
    printf("Enter Matrix A:\n");
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter Matrix B:\n");
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
        scanf("%d", &b[i][j]);
    }
    printf("\nSum of A + B = \n\n");
    sum(a,b,c);
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
}