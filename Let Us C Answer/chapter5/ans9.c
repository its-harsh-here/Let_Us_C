#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter Number of Numbers: ");
    scanf("%d", &n);
    int a[n];
    int min = 2147483647;
    int max = -2147483647;
    if (n == 1)
    {
        printf("Range can't be calculated!\n");
        return 1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter Number: ");
        scanf("%d", &a[i]);
        if (a[i] < min)
            min = a[i];
        else if (a[i] > max)
            max = a[i];
    }
    printf("Range : %d\n", max - min);
}