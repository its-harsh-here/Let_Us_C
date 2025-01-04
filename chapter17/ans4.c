#include <stdio.h>
#include <stdlib.h>

int compare(const void * x, const void * y)
{
    int a = * (int *) x, b = * (int *) y;
    int c = a > b ? 1 : a == b ? 0 : -1;
    return c;
}

struct players
{
    char a[20];
    int b;
    int c;
    int d;
};

int main(void)
{
    int n;
    printf("Enter number of cricketers: ");
    scanf("%d", &n);
    struct players a[n];
    for(int i = 0; i < n; i++)
        scanf("%s%d%d%d", a[i].a, &a[i].b, &a[i].c,&a[i].d);
    qsort(a, n, sizeof(struct players), compare);
    for(int i = 0; i < n; i++)
        printf("%20s %9d %9d %9d\n", a[i].a, a[i].b, a[i].c, a[i].d);
}


