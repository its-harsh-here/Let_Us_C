#include <stdio.h>

struct student 
{
    int rn;
    char n[20];
    char d[5];
    char c[10];
    int y;
};

 void year(struct student a[], int t)
{
    int y;
    printf("Enter year of joining: ");
    scanf("%d", &y);
    for (int i = 0; i < t; i++)
    {
        if(y == a[i].y)
        {
            printf("%4d %20s %5s %10s %4d", a[i].rn, a[i].n, a[i].d, a[i].c, a[i].y);
            printf("\n");
        }
    }
}

void roll(struct student a[], int r, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i].rn == r )
        {
            printf("%4d %20s %5s %10s %4d\n", a[i].rn, a[i].n, a[i].d, a[i].c, a[i].y);
            return;
        }
    }
    printf("Roll number not found!\n");
}

int main(void)
{
    struct student l[450];
    int t;
    printf("Enter number of students: ");
    scanf("%d", &t);
    for(int i = 0; i < t; i++)
        scanf("%d %s %s %s %d", &l[i].rn, l[i].n, l[i].d, l[i].c, &l[i].y);
    year(l, t);
    int r;
    printf("Enter roll number to find: ");
    scanf("%d", &r);
    roll(l, r, t);
}