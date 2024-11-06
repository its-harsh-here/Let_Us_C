#include <stdio.h>

void sort(int a[], int n)
{
    for(int t,i = 1; i < n;)
    {
        if (a[i - 1] > a[i])
        {
            t = a[i];
            a[i] = a[i-1];
            a[i-1] = t;
            i > 1 ? i-- : i++;
        }
        else 
            i++;
    }
}

int main(void)
{
    int n = 25, a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    sort(a, n);
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
}