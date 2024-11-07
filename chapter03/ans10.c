#include <stdio.h>

int main(void)
{
    int x1, y1, x2, y2, x3, y3;
    printf("Enter Point 1: ");
    scanf("%d %d", &x1, &y1);
    printf("Enter Point 2: ");
    scanf("%d %d", &x2, &y2);
    printf("Enter Point 3: ");
    scanf("%d %d", &x3, &y3);
    int m1 = y1/x1;
    int m2 = y2/x2;
    int m3 = y3/x3;
    if (m1 == m2 && m2 == m3)
    {
        printf("The three points are collinear!\n");
        return 0;
    }
    printf("The three points arn't collinear!\n");
}