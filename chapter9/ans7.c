#include <stdio.h>

int euclid(int a, int b)
{
    int x = a / b;
    int y = a - x * b;
    if (y == 0)
        return b;
    euclid(b, y);
}

int main(void)
{
    int j, k;
    scanf("%d %d", &j, &k);  
    printf("%d", euclid(j , k));  
}