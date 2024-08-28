#include <stdio.h>

int main(void)
{
    float h, cc, ts; 
    printf("Enter Hardness, Carbon Content and Tensile Strength of steel: ");
    scanf("%f %f %f", &h, &cc, &ts);
    int a, b, c;
    a = h > 50 ? 1 : 0;
    b = cc < 0.7 ? 1 : 0;
    c = ts > 5600 ? 1 : 0;
    if (a == 1 && b == 1 && c == 1)
        printf("The steel is of GRADE 10!\n");
    else if (a == 1 && b == 1)
        printf("The steel is of GRADE 9!\n");
    else if (b == 1 && c == 1)
        printf("The steel is of GRADE 8!\n");
    else if (a == 1 && c == 1)
        printf("The steel is of GRADE 7!\n");
    else if (a == 1 || b == 1 || c == 1)
        printf("The steel is of GRADE 6!\n");
    else
        printf("The steel is of GRADE 5!\n");
}