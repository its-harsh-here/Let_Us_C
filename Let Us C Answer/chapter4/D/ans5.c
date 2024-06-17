#include <stdio.h>


int main(void)
{
    int r, g, b;
    printf("Enter values of R G B: ");
    scanf("%d %d %d", &r, &g, &b);
    float white;
    if (r >= g && r >= b)
        white = r / 255.0; 
    else if (g >= r && g >= b)
        white = g / 255.0;
    else
        white = b / 255.0;
    if (white == 0)
    {
        printf("Value of\n C: 0\n M: 0\n Y: 0\n K: 1\n");
        return 0;
    }
    float c = (white - r / 255.0) / white;
    float m = (white - g / 255.0) / white;
    float y = (white - b / 255.0) / white;
    float k = 1 - white;
    printf("Value of\n C: %f\n M: %f\n Y: %f\n K: %f\n", c, m, y, k);
}