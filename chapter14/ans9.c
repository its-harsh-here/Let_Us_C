#include <stdio.h>
#include <math.h>

float sd(int n, int a[], float avg)
{
    int sd = 0;
    for(int i = 0; i < n; i++)
        sd += pow(a[i] - avg, 2.0);
    return sqrt(sd/n);
}

int main(void)
{
    int n;
    printf("Enter no of elements: ");
    scanf("%d", &n);
    int a[n];
    float c = 0.0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        c += a[i];
    }
    float avg = c/n;
    printf("Mean = %f\nS.D. = %f\n", avg, sd(n, a, avg));
}