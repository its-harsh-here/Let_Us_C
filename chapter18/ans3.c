#include <stdio.h>
#include <string.h>

float div(int f)
{
    float r = 1.0;
    while(f--)
    {
        r *= 10;
    }
    return r;
}

double getfloat(char a[], int n)
{
    double r = 0;
    int f = 0, s = 1;
    for(int i = 0; i < n; i++)
    {
        if(a[i] <= '9' && a[i] >= '0')
        {
            if(f > 0)
            {
                r += (a[i] - 48) / div(f);
                f++;
            }
            else
            {
                r *= 10;
                r += a[i] - 48;
            }
        }
        else if (a[i] == '.')
            f = 1;
        else if (a[i] == '-')
            s = -1;
    }
    return r * s;
}

int main(void)
{
    char a[20];
    printf("Enter a numeric string: ");
    scanf("%s", a);
    int n = strlen(a);
    double f = getfloat(a, n);
    printf("The entered float is: %lf\n", f);
}