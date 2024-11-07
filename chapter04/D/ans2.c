#include <stdio.h>

int main(void)
{
    char i;
    printf("Enter Character: ");
    scanf("%c", &i);
    if (i > 64 && i < 91)
        printf("The Character is a capital letter\n");
    else if (i > 96 && i < 123)
        printf("The Character is a small case letter\n");
    else if (i > 47 && i < 58)
        printf("The Character is a digit\n");
    else if ((i >= 0 && i < 48) || (i > 57 && i < 65) || (i > 90 && i < 97) || (i > 122 && i < 128))
        printf("The Character is a special symbol\n");
    // We can use else to return special character, but i used it for practice of && and ||
    else 
        printf("The Input Character is not a letter, number or a special symbol");
}