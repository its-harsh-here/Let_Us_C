#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[11];
    printf("Enter ISBN Number: ");
    scanf("%s", a);
    int s = 0;
    for(int i = 0; i < 10; i++)
        s += (a[i] - 48) * (10- i); 
    s % 11 ? printf("Not a valid ISBN Number!") : printf("Valid ISBN Number!");
}