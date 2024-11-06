#include <stdio.h>

int small(int *a)
{
    int t = *a;
    for(int i = 1; i < 25; i++)
    {
        if(*(a+i) < t)
            t = *(a+i);
    }
    return t;
}

int main(void)
{
    int a[25];
    printf("Enter 25 numbers: ");
    for(int i = 0; i < 25; i++)
        scanf("%d", &a[i]);
    printf("Smallest number: %d",small(a));
}