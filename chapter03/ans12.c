#include <stdio.h>

int main(void)
{
    int x,y;
    printf("Enter coordinates of a point: ");
    scanf("%d %d", &x, &y);
    if (x == y && x == 0)
        printf("The given point lies on the origin.\n");
    else if (x == 0)
        printf("The given point lies on the y axis.\n");
    else if (y == 0)
        printf("The given point lies on the x axis.\n");
    else 
        printf("The given point doesnt lie on either of the axis.\n");
}