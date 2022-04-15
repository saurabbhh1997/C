#include <stdio.h>
#include <math.h>

float sine(float);
int fact(int);

int main()
{
    float x, sum;
    printf("Enter the value of angle(in Radian):\n");
    scanf("%f", &x);
    sum = sine(x);
    printf("sin(%lf)=%lf\n", x, sum);
    return 0;
}

float sine(float x)
{
    int i, a, sign = 1;
    float sum = 0;
    for (i = 0, a = 1; i < 5; i++, a = a + 2, sign = sign * (-1))
        sum = sum + sign * pow(x, a) / fact(a);
    return (sum);
}

int fact(int num)
{
    int f = 1;
    while (num > 0)
    {
        f = f * num;
        num--;
    }
    return (f);
}