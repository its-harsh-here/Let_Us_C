#include <stdio.h>

#define BV(x) (1 << x)

struct animal
{
    char name[30];
    int a;
};

int main(void)
{
    int n;
    struct animal t[4];
    char a[][10] = {"Canine", "Feline", "Cetacean", "Marsupial"};
    char h[][10] = {"Herbivore", "Carnivore"}; 
    printf("Enter Number: ");
    scanf("%d", &n);
    if (n > 31)
    {
        printf("Invalid Input!");
        return 1;
    }
    printf("Animal Type: ");
    for(int i = 0; i < 4; i++)
    {
        if (BV(i) & (n % 16))
            printf("%s ", a[i]);
    }
    if (n % 16 == 0)
        printf("Unknown!");
    printf("\n");
    printf("Diet: ");
    n / 16 ? printf("%s\n", h[0]) : printf("%s\n", h[1]);
    return 0;
}