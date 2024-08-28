#include <stdio.h>

int main(void)
{
    char c;
    printf("Enter a Character: ");
    scanf("%c", &c);
    (c>64 && c<91)?printf("Upper Case alphabet!\n"):(c>96 && c<123)?printf("Lower Case alphabet!\n"):
    (c >=0 && c < 48 || c > 57 && c < 65 || c > 90 && c < 97 || c > 122 && c < 128)?
    printf("Special Character!\n"):printf("Neither a letter nor a Special Character!\n");   
}