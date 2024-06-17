#include <stdio.h>

int main(void)
{
    int C, D, A;
    printf("Enter two numbers (C , D): ");
    scanf("%d %d", &C, &D);
    A = C;
    C = D;
    D = A;
    printf("The interchanged location of numebers are as followes:\n C = %d\n D = %d\n", C, D);
}