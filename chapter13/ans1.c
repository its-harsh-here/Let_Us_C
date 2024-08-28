#include <stdio.h>

void swap(int a[], int n)
{
    int t;
    for(int j = 1; j < n; j+=2)
    {
        t = a[j];
        a[j] = a[j-1];
        a[j-1] = t; 
    }
}

int main()
{
    int n;
    printf("Enter Array Size: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    swap(a, n);
    for(int i = 0; i < n; i++)
        printf("%d ", a[i]);
}