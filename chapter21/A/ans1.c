#include <stdio.h>

#define BV(x) (1 << x)

int main(void)
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);
    char n[][10] = {"Violet", "Indigo", "Blue", "Green", "Yellow", "Orange", "Reds"};
    for(int i = 0; i < 7; i++)
    {
        if (BV(i) & a)
            printf("%s ", n[i]);
    }
    printf("\n");
}