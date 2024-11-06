#include <stdio.h>
#include <string.h>

int main() 
{
    char a[50] = "a", b[50] = "b", t[50];
    printf("f(0) = %s\nf(1) = %s\n", a, b);
    int n = 5;
    for(int i = 2; i <= n; i++) 
    {
        strcpy(t, b);
        strcat(b, a);
        printf("f(%d) = %s\n", i, b);
        strcpy(a, t);
    }
    return 0;
}
