#include <stdio.h>

int main(void)
{
    int cp, sp, margin;
    printf("Enter Cost Price and Selling Price of an Item: ");
    scanf("%d %d", &cp, &sp);
    margin = sp - cp;
    if (margin > 0)
        printf("Seller Made a Profit of Rs %d\n", margin);
    else if (margin < 0)
        printf("Seller made a Loss of Rs %d\n", -margin);
    
    else 
        printf("Seller neither made a profit nor a loss\n");
}