#include <stdio.h>

#define BV(x) (1 << x)

int main(void)
{
    char g[][20] = {"Cricket", "Basketball", "Football", "Hockey", "Lawn Tennis", "Table Tennis", "Carom", "Chess"};
    int n, c = 0;
    printf("Enter number: ");
    scanf("%d", &n);
    if(n > 256)
    {
        printf("Invalid Input!");
        return 1;
    }
    printf("The college won: ");
    for(int i = 0; i < 9; i++)
    {
        if(n & BV(i))
        {
            printf("%s ", g[i]);
            c++;
        }
    }
    if (c == 0)
        printf("No games!");
    printf("\n");
    if(c >= 5)
        printf("The college WON the tournament!\n");
    else
        printf("The college LOST the tournament\n");
    return 0;
}