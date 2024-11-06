#include <stdio.h>
#include <string.h>

int main(void)
{
     char a[20];
    printf("Enter Credit Card No: ");
    gets(a);
    int o = 0, e = 0;
    for(int i = 0; i < 19; i++)
    {
        if (a[i] == ' ')
            continue;
        if(i % 2 == 0)
            o += (a[i] - 48) % 9;
        else
            e += (a[i] - 48);
    }   
    (e + o) % 10 ? printf("Not a Valid Card\n"): printf("Valid Card\n");
}