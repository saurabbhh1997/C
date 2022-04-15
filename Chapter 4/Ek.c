#include <stdio.h>
#include <math.h>

int main()
{
    int i, n;
    float p, a, q, r, x, y;
    for (i = 1; i <= 10; i++)
    {
        printf("Enter value of Principal and Rate:\n");
        scanf("%f%f", &p, &r);
        printf("Enter the value of Compound interest and years:\n");
        scanf("%f%d", &q, &n);
        x = (1 + r / q);
        y = n * q;
        a = p * pow(x, y);
        printf("a=%f\n", a);
    }
    return 0;
}