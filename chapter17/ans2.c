#include <stdio.h>

struct bank
{
    int a;
    char b[20];
    float c;
};

void bal(struct bank s[], int n)
{
    printf("The following people have balance below 100: \n");
    for(int i = 0; i < n; i++)
    {
        if(s[i].c < 100)
            printf("%9d %20s %2.2f\n", s[i].a, s[i].b, s[i].c);
    }
}

void dw(struct bank s[],int n, int an, int t, float am)
{
    int bal;
    for(int i = 0; i < n; i++)
    {
        if (s[i].a == an)
        {
            bal = s[i].c;
            break;
        }
        else if (i == n - 1)
        {
            printf("Account doesn't exsist!\n");
            return;
        }
    }
    if(t)
        printf("%.2f has been deposited in bank account %d!\n", am, an);
    else if (am > bal) 
        printf("The balance is insufficient for the specific withdrawal\n");
    else
        printf("%.2f has been withdrawn from bank account %d\n", am, an);
    
}

int main(void)
{
    struct bank s[200];
    printf("Enter number of customers of the bank: ");
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        scanf("%d%s%f", &s[i].a, s[i].b, &s[i].c);
    bal(s, n);
    int an, t;
    float am;
    printf("Enter Account Number: ");
    scanf("%d", &an);
    printf("Enter 1 to deposit, 0 to withdraw: ");
    scanf("%d", &t);
    printf("Enter amount: ");
    scanf("%f", &am);
    dw(s, n, an, t, am);
}