#include <stdio.h>

int main()
{
    int num, sum, a, b;
    printf("Enter a four digit number:\n");
    scanf("%d", &num);
    a = num % 10;
    num = num / 1000;
    b = num % 10;
    sum = a + b;
    printf("Sum of first and last digit is:%d", sum);
    return 0;
}
