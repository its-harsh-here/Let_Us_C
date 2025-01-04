#include <stdio.h>
#include <string.h>

struct parts
{
    char a[4];
    int b;
    char c[20];
    int d;
};

void ret(struct parts a[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(strcmp(a[i].a, "BB1") >= 0 && strcmp(a[i].a, "CC6") <= 0)
            printf("%6s %4d %20s %6d\n", a[i].a, a[i].b, a[i].c, a[i].d);
    }
}

int main(void)
{
    int n;
    printf("Enter number of parts of the engine: ");
    scanf("%d", &n);
    struct parts a[n];
    printf("Enter data:\n");
    for(int i = 0; i < n; i++)
        scanf("%s%d%s%d", a[i].a, &a[i].b, a[i].c, &a[i].d);
    ret(a, n);
}