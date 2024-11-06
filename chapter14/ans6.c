#include <stdio.h>

#define N 3

void multiply(int a[][N], int b[][N], int c[][N])
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            for(int k = 0; k < N; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }
}

int main(void)
{
    int a[N][N], b[N][N], c[N][N] = {0};
    printf("Enter Matrix A:\n");
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
            scanf("%d", &a[i][j]);
    }
    printf("Enter Matrix B:\n");
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
            scanf("%d", &b[i][j]);
    }
    multiply(a,b,c);
    printf("\nA X B = \n\n");
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
            printf("%d ", c[i][j]);
        printf("\n");            
    }
}