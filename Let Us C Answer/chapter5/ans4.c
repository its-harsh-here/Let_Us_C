#include <stdio.h>

int main(void)
{
    for (int i = 0; i < 256; i++)
        printf("Number %d represents the ASCII value of %c\n", i , i);
}