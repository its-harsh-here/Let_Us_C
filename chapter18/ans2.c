#include <stdio.h>
#include <string.h>

int getint(char a[], int n)
{
    int r = 0, s = 1;
    for(int i = 0; i < n; i++)
    {
        if(a[i] >= '0' && a[i] <= '9')
        {
            r *= 10;
            r += a[i] - 48;
        }
        else if(a[i] == '-')
            s = -1;
    }
    return r * s;
}

int main(void)
{
    char a[100];
    printf("Enter a numeric string: ");
    scanf("%s", a);
    int n = strlen(a);
    int i = getint(a, n);
    printf("The integer entered is: %d\n", i);
}