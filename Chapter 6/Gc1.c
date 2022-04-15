// Function to calculate sum of digits of a number

#include <stdio.h>
void calsum(int);

int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);
    calsum(num);
    return 0;
}

void calsum(int x)
{
    int sum = 0, i;
    for (i = 1; x; i++)
    {
        sum = sum + (x % 10);
        x = x / 10;
    }
    printf("Sum of digits=%d\n", sum);
}