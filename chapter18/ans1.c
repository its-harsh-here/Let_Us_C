#include <stdio.h>
#include <string.h>

void xget(char *a)
{
    scanf("%[^\n]s", a);
}

void xput(char *a)
{
    while(*a != '\0')
    {
        printf("%c", *a);
        a++;
    }
}

int main(void)
{
    char a[100];
    printf("Enter string: ");
    xget(a);
    xput(a);
}