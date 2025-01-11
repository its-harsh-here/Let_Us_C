#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *str[] = {
        "We will teach you how to...",
        "Move a mountain",
        "Leave a building",
        "Erase the past",
        "Make a million",
        "...all though C!"
    };
    char a[50];
    printf("Enter a string: ");
    scanf("%[^\n]s", a);
    int c = 0, n = strlen(a) - 1, l;
    char * str1 = (char *) malloc(n + 2);
    str1 = a;
    for(int i = 0; i < 6; i++)
    {
        c = 0;
        l = strlen(str[i]);
        for(int j = 0; j < l; j++)
        {
            if (c == n - 1)
            {
                printf("Yes\n");
                return 0;
            }
            (str1[c] == str[i][j]) ? c++ : (c = 0);

        }
    }
    printf("No\n");
    
}