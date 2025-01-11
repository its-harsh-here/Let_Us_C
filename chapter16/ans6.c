#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char name[50], ans[50];
    printf("Enter full Name: ");
    scanf("%[^\n]s", name);
    int n = strlen(name), l = 1;
    ans[0] = name[0];
    for(int i = 1, s = 0; i < n; i++)
    {
        if(name[i] == ' ')
        {
            if (s == 0)
            {
                ans[l] = name[++i];
                l++;
            }
            s++;
        }
        if (s == 2)
        {
            ans[l] = name[i];
            l++;
        }
    }
    ans[l] = '\0';
    strcpy(name, ans);
    printf("%s\n", name);
}
