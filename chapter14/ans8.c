#include <stdio.h>

int det(int n, int a[][n])
{
        
}

int main(void)
{
    int n = 6, a[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        scanf("%d", &a[i][j]);
    }
    printf("\nDeterminant = %d", det(n, a));
}