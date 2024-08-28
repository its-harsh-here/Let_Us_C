#include <stdio.h>
#include <math.h>

int check(int, int, int, int, int, int);
float area(float a, float b, float c);
float dist(int a, int b, int c, int d);


int check(int p1, int p2, int p3, int a, int b, int c)
{
    if (p1 <= a && p2 <= b && p3 <= c)
        return 1;
    else
        return 0;
}

float dist(int a, int b, int c, int d)
{
    float di;
    di = sqrt(pow((a - c), 2.0) + pow((b - d), 2.0));
    return di;
}

float area(float a, float b, float c)
{
    float s = (a + b + c) / 2.0;
    float ar = sqrt(s * (s-a) * (s-b) * (s-c));
    return ar;
}

int main(void)
{
    int x1, y1, x2, y2, x3, y3, x, y;
    printf("Enter Coordinates of Triangle ABC\n");
    printf(" Point A: ");
    scanf("%d %d", &x1, &y1);
    printf(" Point B: ");
    scanf("%d %d", &x2, &y2);
    printf(" Point C: ");
    scanf("%d %d", &x3, &y3);
    printf("Enter point P: ");
    scanf("%d %d", &x, &y);
    float a = dist(x1, y1, x2, y2);
    float b = dist(x2, y2, x3, y3);
    float c = dist(x1, y1, x3, y3);
    printf("Length of Sides of Triangle: %.2f %.2f %.2f\n", a, b, c);
    printf("Area of Triangle: %.2f\n", area(a,b,c));
    printf("%d", check(dist(x1, y1, x, y), dist(x2, y2, x, y), dist(x3, y3, x, y), a, b, c));
}