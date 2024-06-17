#include <stdio.h>

int main(void)
{
    float w, h;
    printf("Enter weight(in kg) and height(in meter) of a person: ");
    scanf("%f %f", &w, &h);
    float bmi = w / (h * h);
    if (bmi < 15)
        printf("The person is in STARVATION CATEGORY!\n");
    else if (bmi >= 15 && bmi < 17.6)
        printf("The person is in ANOREXIC CATEGORY!\n");
    else if (bmi >= 17.6 && bmi < 18.6)
        printf("The person is in UNDERWEIGHT CATEGORY!\n");
    else if (bmi >= 18.6 && bmi < 25)
        printf("The person is in IDEAL CATEGORY!\n");
    else if (bmi >= 25 && bmi < 30)
        printf("The person is in OVERWEIGHT CATEGORY!\n");
    else if (bmi >= 30 && bmi < 40)
        printf("The person is in OBESE CATEGORY!\n");
    else if (bmi >= 40)
        printf("The person is in MORBIDLY OBESE CATEGORY!\n");
    else
        printf("INVALID INPUT!\n");
}