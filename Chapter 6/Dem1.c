// Method-1 slow execution

#include <stdio.h>
void primefact(int);

int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);
    primefact(num);
    return 0;
}

void primefact(int n)
{
    int i;
    for (i = 2; i > 1; i++)
    {
        while (n % i == 0)
        {
            printf("%d\t", i);
            n = n / i;
        }
    }
}