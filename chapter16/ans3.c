#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *rev[] = {
        "abc",
        "djdfhf",
        "aba",
        "12345"
    };
    int n = 4;
    for(int i = 0; i < n; i++)
    {
        int l = strlen(rev[i]);
        char *a = (char *) malloc (l + 1);
        for(int j = 0; j < l; j++)
            a[l - 1 - j] = rev[i][j];
        a[l] = '\0';
        rev[i] = a;
    }
    for(int i = 0; i < n; i ++)
        printf("%s\n", rev[i]);
}
