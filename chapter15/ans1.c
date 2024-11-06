#include <stdio.h>

int main(void)
{
    char str[100];
    printf("Enter string: ");
    scanf("%[^\n]s", str);
    int a, b;
    printf("Enter position and no of characters to be extracted: ");
    scanf("%d%d", &a, &b);
    for(int i = a - 1; i < a + b - 1; i++)
        printf("%c", str[i]);
}