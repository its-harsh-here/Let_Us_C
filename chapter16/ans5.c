#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char a[101], b[101];
    scanf("%[^\n]s", a);
    int i, n = strlen(a), l = 0, t = 0;
    for(i = 0; i < n; i++) 
    {
        if(((a[i] == 't' || a[i] == 'T')&& (a[i+1] == 'h' || a[i+1] == 'H') && (a[i+2] == 'e' || a[i+2] == 'E')) && (a[i + 3] == '\0' || a[i+3] == ' '))
            i += 3;
        else
        {
            b[l] = a[i];
            l++;
        }
    }
    b[l] = '\0';
    strcpy(a, b);
    printf("%s\n", a);
}