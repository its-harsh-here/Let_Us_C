#include <stdio.h>

int main(void)
{
    int n, cp = 0, cn = 0, cz = 0;
    printf("Enter number of numbers: ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        int u;
        printf("Enter Number: ");
        scanf("%d", &u);
        if (u > 0)
            cp++;
        else if (u < 0)
            cn++;
        else
            cz++;
    }
    printf("Positive Numbers Entered: %d\n", cp);
    printf("Negative Numbers Entered: %d\n", cn);
    printf("Zero Entered: %d\n", cz);
}