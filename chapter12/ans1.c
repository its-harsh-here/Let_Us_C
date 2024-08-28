// ANS-> before compiling source code is expanded ans saved in a file where we can check how the code
//is expanded! File.i
#include <stdio.h>
#define p(x) ((x)*(x)) // x is substituted as it is hence we need to put brackets in all
int main(void)
{
    printf("%d",p(2+2));
    return 0;
}