#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a digit number: ");
    scanf("%d", &n);
    int s = 0;
    while (n > 0)
    {
        s += n%10;
        n /= 10;
    }
/*
    for(;n >0;n/=10)
        s+=n%10; 
*/    
    printf("Sum of its digit is: %d\n", s);
    return 0;
}



