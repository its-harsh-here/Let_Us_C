#include <stdio.h>

int main(void)
{
    int a = 1189, b = 841;
    for (int i = 1; i <=8 ; i++)
    {
        int c = b;
        int d = a/2;
        printf("A%d has dimensions %d mm x %d mm\n", i, c, d);
        a = c;
        b = d;
    }
}