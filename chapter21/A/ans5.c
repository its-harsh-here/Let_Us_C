#include <stdio.h>

#define BV(x) 1 << x

int main(void)
{
    int n;
    char b[][15] = {"Mechanical", "Chemical", "Electronics", "CS"};
    printf("Enter number of students: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
    {
        printf("Enter student %d data: ", i + 1);
        scanf("%d", &a[i]);
    }
    for(int d = 0; d < n; d++)
    {
        printf("\nData for student %d: \n", d + 1);
        int c = a[d];
        printf("Year: ");
        for(int i = 0; i < 4; i++)
        {
            if (BV(i) & c)
            {
                printf("%d\n", i + 1);
                break;
            }
            else if (i == 3)
                printf("N.A.\n");
        }
        printf("Department: ");
        for(int i = 4; i < 8; i++)
        {
            if(BV(i) & c)
            {
                printf("%s\n", b[i - 4]);
                break;
            }
            else if (i == 7)
                printf("N.A.\n");
        }
        int r = c / 256;
        printf("Room No: %d\n", r);
    }
    printf("\n");
}