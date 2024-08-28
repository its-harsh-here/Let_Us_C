#include <stdio.h>

int main(void)
{
    int a = 0, b = 1;
    while(1)
    {
        if(a == 12 && b == 0)
            printf("Noon\n");
        else if(a == 24 && b == 0)
        {
            printf("Midnight\n");
            break;
        }
        else
        {
            if (a < 10 && b < 10)  
                printf("0%d:0%d ", a, b);
            else if (b < 10)
                printf("%d:0%d ", a, b);        
            else
                printf("%d:%d ", a, b);
            if (a < 12)
                printf("AM\n");
            else
                printf("PM\n");
        }
        b++;
        a += b / 60;
        if (b == 60)
            b = 0;
        switch (n)
        {
            case 1:
                printf("You chose 1\n");
                break;

            case 2:
                printf("You chose 2\n");
                break;
            default:
                printf("Incorrect choice\n");
        }
        return 0;
    }
}