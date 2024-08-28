#include <stdio.h>

int main(void)
{
    int a[25], u, c = 0;
    printf("Enter elements of array: ");
    for(int i = 0; i < 25; i++)
        scanf("%d", &a[i]);
    printf("Enter number to be searched: ");
    scanf("%d", &u);
    for(int i = 0; i < 25; i++)
    {
        if (a[i] == u)
            c++;
    }
    printf("%d", c);
}