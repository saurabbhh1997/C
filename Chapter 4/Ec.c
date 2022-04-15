#include <stdio.h>
int main()
{
    int i;
    float sum = 0, fact = 1;
    for (i = 1; i <= 7; i++)
    {
        fact = fact * i;
        sum = sum + (i / fact);
    }
    printf("First seven terms add=%f\n", sum);
    return 0;
}