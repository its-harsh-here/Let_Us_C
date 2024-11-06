#include <stdio.h>

int symmetric(int n, int a[][n])
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            if(a[i][j] != a[j][i])
                return 0;
        }
    }
    return 1;
}

int main(void)
{
    int n;
    printf("Enter order of matrix: ");
    scanf("%d", &n);
    int a[n][n];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    }
    if(symmetric(n,a))
        printf("Yes");
    else
        printf("No");
}