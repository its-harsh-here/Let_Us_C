#include <stdio.h>

void modify(int m[])
{
    for(int i = 0; i < 10; i++)
        m[i] *= 3;
}

int main(void)
{
    int a[10];
    printf("Enter 10 numbers: ");
    for(int i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    modify(a);
    for(int i = 0; i < 10; i++)
        printf("%d ", a[i]);
}