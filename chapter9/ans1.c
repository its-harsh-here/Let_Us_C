#include <stdio.h>
#include <math.h>
void point(int *a,int *b, int *c, int *d, int *e, int *sum, float *avg, float *sd)
{
    *sum = *a+*b+*c+*d+*e;
    *avg = *sum / 5.0;
    *sd = sqrt((*a**a + *b**b + *c**c + *d**d + *e**e) / 5.0 - *avg**avg);
}


int main(void)
{
    int a, b, c, d, e, sum;
    float avg, sd;
    
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    point(&a, &b, &c, &d, &e, &sum, &avg, &sd);
    printf("Sum: %d\nAverage: %f\nStandard Deviation: %f", sum, avg, sd);
    
}