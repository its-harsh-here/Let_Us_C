#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[10];
    printf("Enter char: ");
    scanf("%s", a);
    int b = 0, n = strlen(a);
    for(int i = 0; i < n; i++)
    {
        b = b * 10 + a[i] - 48;
    }
    
    printf("Number: %d", b);
}