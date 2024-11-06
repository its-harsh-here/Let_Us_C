#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter Number of Elements: ");
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Press 1 to \nPress 2 to \nPress 3 to \nPress 4 to exit\n");
    
}