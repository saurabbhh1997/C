// Power function

#include <stdio.h>
int power(int, int);

int main()
{
    int a, b, pow;
    printf("Enter the number:\n");
    scanf("%d", &a);
    printf("Enter the power raised:\n");
    scanf("%d", &b);
    pow = power(a, b);
    printf("%d raised to power %d=%d\n", a, b, pow);
    return 0;
}

int power(int x, int y)
{
    int i, pow = 1;
    if (y == 0)
        return (1);
    else
    {
        for (i = 1; i <= y; i++)
        {
            pow = pow * x;
        }
        return (pow);
    }
}