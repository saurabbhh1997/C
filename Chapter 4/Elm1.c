#include <stdio.h>
#include <math.h>

int main()
{
    int i, k = 2;
    float sum, a, x;
    printf("Enter the value of x:\n");
    scanf("%f", &x);
    a = (x - 1) / x;
    sum = a;
    for (i = 1; i <= 6; i++)
    {
        sum = sum + (powf(a, k)/2);
        k++;
    }
    // sum = a + sum;
    printf("Sum of first seven terms of the series=%f\n", sum);
    return 0;
}