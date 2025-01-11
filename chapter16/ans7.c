#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[100];
    scanf("%[^\n]s", a);
    int n = strlen(a), l = 0, c = 0;
    for(int i = 0; i < n; i++)
    {
        if(l == 2)
        {
            c++;
            l = 0;
        }
        else if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || 
        a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' )
            l++;
        else 
            l = 0;
    }
    
    printf("%d\n", c);
}