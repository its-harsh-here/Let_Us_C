#include <stdio.h>

void reverse(int a[], int r[], int l)
{
    for(int i = 0; i < l; i++)
        r[i] = a[l-1-i];
}

int main(void)
{
    int n;
    printf("Enter length of array: ");
    scanf("%d", &n);
    int a[n], b[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    reverse(a,b,n);
    for(int i = 0; i < n; i++)
        printf("%d ", b[i]);
}