#include <stdio.h>
#include <stdlib.h>

void fibo(int a, int b, int n)
{
    if (n == 0)
        exit(0);
    int t = a;
    a = b;
    b += t;
    printf("%d ", b);
    fibo(a,b, n-1);

}
int main(void)
{
    printf("1 1 ");
    fibo(1, 1, 23);
}