#include <stdio.h>

int main(void)
{
    printf("\nThis is a matchstick game! There are 21 matchstick's and the person to pick the last one loses!\n");
    int c = 0;
    while(c < 21)
    {
        int p1 = 0, p2 = 0;
        do
        {
            printf("\nYour Pick: ");
            scanf("%d", &p1);
        } while (p1 > 4 || p1 < 1);
        c += p1;
        if (c >= 21)
        {
            printf("\nCount = 21\n\n");
            printf("Computer Wins!\n");
            return 0;
        }
        p2 += 5 - p1;
        c += p2;
        printf("Computer's Pick: %d\n", p2);
        printf("Count = %d\n", c);
        if (c == 20)
        {
            printf("\nYour Pick: 1\n");
            printf("Count = 21\n\n");
            printf("Computer Wins!\n");
            return 0;
        }
    }
}