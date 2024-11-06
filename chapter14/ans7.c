#include <stdio.h>

void rep(int a[])
{
    int t1 = a[0];
    int t2 = a[1];
    for(int i = 0; i < 3; i++)
        a[i] = a[i+2];
    a[3] = t1;
    a[4] = t2;
}

int main(void)
{
    int a[4][5];
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    }
    for(int i = 0; i < 4; i++)
        rep(a[i]);
    printf("\n");
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}