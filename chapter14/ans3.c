#include <stdio.h>

void transpose(int a[][4])
{
    for(int i = 0, t; i < 4; i ++)
    {
        for(int j = i; j < 4; j++)
        {    
            t = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = t;
        }
    }
}

int main(void)
{
    int a[4][4];
    printf("Enter a matrix(4x4):\n");
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
            scanf("%d", &a[i][j]);
    }
    transpose(a);
    printf("\nTranspose:\n");
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}