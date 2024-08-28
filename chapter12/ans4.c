#include <stdio.h>

#define MEAN(x,y) ((x+y)/2.0)

#define ABSOLUTE(x) (x<0 ? -x : x)

#define CONVERT(c) (c<= 90? c+= 32 : (c-= 32))

#define BIG(a,b,c) (a >= b && a>=c ? a : b >= a && b >= c ? b : c) 

int main(void)
{
    int x,y,z,a,b,c;
    char Ch;
    printf("Enter 2 num: ");
    scanf("%d %d", &x,&y);
    printf("%f\n",MEAN(x,y));
    printf("Num: ");
    scanf("%d", &z);
    printf("ABSOLUTUE: %d\n", ABSOLUTE(z));
    printf("Enter Char: ");
    scanf(" %c", &Ch);
    printf("Converted: %c\n", CONVERT(Ch));
    printf("Enter 3 num: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", BIG(a,b,c));
}