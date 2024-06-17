#include <stdio.h>

int main(void)
{
    int m1, m2, m3, m4, m5;
    printf("Input marks: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
    float avg = (m1 + m2 + m3 + m4 + m5)/5;
    printf("Average: %f \nPercentage: %f \n", avg, avg);
}