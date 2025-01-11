#include <stdio.h>
#include <string.h>

int main(void)
{
    char b[81], a[81];
    scanf("%[^\n]s", a);
    int i, j, n = strlen(a);
    for(j = 0, i = 0; i < n; i++)
    {
        if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' 
        || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
            continue;
        b[j] = a[i];
        j++;
    }
    b[j] = '\0';
    strcpy(a, b);
    printf("%s\n", a);
}