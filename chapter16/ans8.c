#include <stdio.h>
#include <string.h>

void one(int n)
{
    switch(n)
    {
        case 1:
            printf("One ");
            break;
        case 2:
            printf("Two ");
            break;
        case 3:
            printf("Three ");
            break;
        case 4:
            printf("Four ");
            break;
        case 5:
            printf("Five ");
            break;
        case 6:
            printf("Six ");
            break;
        case 7 :
            printf("Seven ");
            break;
        case 8 :
            printf("Eight ");
            break;
        case 9 :
            printf("Nine ");
            break;
        default:
            return;
    }
}

void tens(int n)
{
    switch (n)
    {

        case 11:
            printf("Eleven ");
            break;
        case 12:
            printf("Tweleve ");
            break;
        case 13:
            printf("Thirteen ");
            break;
        case 14:
            printf("Fourteen ");
            break;
        case 15:
            printf("Fifteen ");
            break;
        case 16:
            printf("Sixteen ");
            break;
        case 17:
            printf("Seventeen ");
            break;
        case 18:
            printf("Eighteen ");
            break;
        case 19:
            printf("Nineteen ");
            break;
        case 10:
            printf("Ten ");
            break;
        default:
            return;
    }
}

void twos(int n)
{
    switch (n)
    {
        case 2:
            printf("Twenty ");
            break;
        case 3:
            printf("Thirty ");
            break;
        case 4:
            printf("Forty ");
            break;
        case 5:
            printf("Fifty ");
            break;
        case 6:
            printf("Sixty ");
            break;
        case 7:
            printf("Seventy ");
            break;
        case 8:
            printf("Eighty ");
            break;
        case 9:
            printf("Ninty ");
            break;
        default:
            return;
    }
}

void hundred(int n)
{
    if(n/100 == 0)
        return;
    one(n/100);
    printf("Hundred ");
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The Number in words is: ");
    while(n)
    {
        if (n > 1000000)
        {
            hundred(n/1000000);
            n %= 100000000;
            twos(n/10000000);
            if (n > 10000000 && n < 20000000)
                tens(n/1000000);
            else
            {
                n %= 10000000;    
                one(n/1000000);
            }
            printf("Million ");
            n %= 1000000;
        }
        else if (n > 1000)
        {
            hundred(n/1000);
            n %= 100000;
            twos(n/10000);
            if (n > 10000 && n < 20000)
                tens(n/1000);
            else
            {
                n = n % 10000;     
                one(n/1000);
            }
            printf("Thousand ");
            n %= 1000;
        }
        else if ( n >= 100)
        {
            hundred(n);
            n %= 100;
        }
        else if (n >= 10)
        {
            if(n < 20)
            {
                tens(n);
                break;
            }
            twos(n / 10);
            n %= 10;
        }
        else
        {
            one(n);
            n %= 1;
        }
    }
    printf("\n");
}