#include <stdio.h>

//printf(" A -> B\n A -> C\n B -> C\n A -> B \n C -> A\n C -> B \n A -> B \n A -> C \n B -> C \n B -> A \n C -> A \n B -> C\n A -> B \n A -> C \n B -> C\n");

void hanoi(int n, char a, char c, char b)// (no , from, to, aux)
{
    if(n == 0)
        return;
    hanoi(n-1, a, b, c); // recursion till n = 1
    printf("%d Moves from %c to %c\n", n, a, c);
    hanoi(n-1, b, c, a); // when n = 1; it gives nothing, so first 2 moves are done by first recursion
}

int main(void)
{
    hanoi(4, 'A', 'C', 'B');
}