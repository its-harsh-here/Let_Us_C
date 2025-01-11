#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
    char *name[] = {
        "Harsh",
        "Gautam",
        "Yashvardhan",
        "Harshvardhan",
        "Yash",
    };
    int n = 5;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(strcmp(name[i], name[j]) > 0)
            {
                char *t = (char *) malloc (strlen(name[i] + 1));
                t = name[i];
                name[i] = name[j];
                name[j] = t;
            }
        }
    }
    for(int i = 0; i < n; i++)
        printf("%s\n", name[i]);
}