#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter no. of elements in array: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(int i = 0; i <= n/2 - 1; i++)
    {
        if (a[i] != a[n - 1 - i])
        {
            printf("No");
            return 0;
        }
    }
    printf("Yes");
}