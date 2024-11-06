#include <stdio.h>

#define one(c) (c >=97 && c <= 122)

#define two(C) (C >= 65 && C <= 90)

#define three(c) (two(c) || one(c))

#define four(a,b) (a>b?a:b)

int main(void)
{
    printf("%d %d\n",one('c'), one('J'));
    printf("%d %d\n", two('C'),two(1));
    printf("%d %d %d\n",three('c'), three('J'), three(1));
    printf("%d %d\n", four(4,8),four('a','b'));
}