// Recursive function to calculate sum of digits of a given number

#include <stdio.h>
int rcalsum(int);

int main()
{
    int num, sum;
    printf("Enter the number:\n");
    scanf("%d", &num);
    sum = rcalsum(num);
    printf("Sum of digits=%d\n", sum);
    return 0;
}

int rcalsum(int num)
{
    int sum = 0;
    if (num == 0)
        return sum;
    sum = (num % 10) + rcalsum(num / 10);
    return (sum);
}