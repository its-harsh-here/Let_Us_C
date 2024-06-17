#include <stdio.h>

char n[][10] = {"Ram","Shyam","Ajay"};

int main(void)
{
    int a[3], j = 0;
    printf("Enter age of Ram Shyam and Ajay: ");
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    int b = a[0];
    if (a[0] == a[1] && a[1] == a[2])
    {
        printf("All are of same age\n");
        return 0;
    }
    else if (a[0] == a[2] && a[0] < a[1])
    {
        printf("%s and %s are the yongest people in the group\n", n[0], n[2]);
        return 0;
    }
    else if (a[1] == a[2] && a[1] < a[0])
    {
        printf("%s and %s are the yongest people in the group\n", n[1], n[2]);
        return 0;
    }
    else if (a[0] == a[1] && a[0] < a[2])
    {
        printf("%s and %s are the yongest people in the group\n", n[0], n[2]);
        return 0;
    }
    for (int i = 1; i < 3 ; i++)
    {
        if (a[i] < b)
        {
            b = a[i];
            j = i;
        }
    }
    printf("%s is the yongest\n", n[j]);    
}