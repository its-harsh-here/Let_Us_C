#include <stdio.h>


char a[][100] ={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
int main(void)
{
    int y,d,n;
    printf("Enter Year: ");
    scanf("%d", &y);
    d = (y - 1) /4 + (y-1) * 365;
    n = d % 7;
    printf("The day on 1st January of the year %d is %s", y, a[n]);   
}