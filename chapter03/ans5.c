#include <stdio.h>
#include <math.h>

// int myfunc(int num)
// {
//     int rev =0;
//     while(1)
//     {
//         if(num <10)
//         {
//              rev = rev*10 +num;
//              break;     
//         }    
//         rev = rev*10 +num%10;   
//         num /= 10;
//     }
//     return rev;
// }

int main(void)
{
    int n, r[10];
    int c = 0;
    float a = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    // int rev = myfunc(n);
    // printf("reverse = %d\n", rev);
    // printf(" are the numbers equal =%d", n == rev);
    // return 0;
    int b = n;
    while (b >= 1)
    {
        c++;
        b /= 10;
    }
    b = n;
    for (int i = 0; i < c; i++)
    {
        r[i] = n % 10;
        n /= 10;
        a += pow(10, c - 1 - i) * r[i];
    }
    printf("The Reverse of the given number is: %d\n",(int) a);
    if (a == b)
        printf("The Original Numbers and Reversed Number are equal\n");
    else 
        printf("The Original Numbers and Reversed Number arn't Equal\n");
}


