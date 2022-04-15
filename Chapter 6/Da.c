// Factorial function

#include <stdio.h>
int factorial(int);

int main()
{
    int num, fact;
    printf("Enter the number:\n");
    scanf("%d", &num);
    fact = factorial(num);
    printf("Factorial=%d\n", fact);
    return 0;
}

int factorial(int n)
{
    int fact = 1, i;
    if (n == 1)
        return (1);
    else
    {
        for (i = n; i >= 1; i--)
            fact = fact * i;
        return (fact);
    }
}