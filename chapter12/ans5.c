#include <stdio.h>
#include "interest.h"

int main(void)
{
    float p, r, t;
    printf("Enter Principal, Rate Of Interest ans Time period: ");
    scanf("%f %f %f", &p, &r, &t);
    printf("Interest = %f\n", SI(p,r,t));
    printf("Amount = %f", AMOUNT(p,r,t));
} 