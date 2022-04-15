#include <stdio.h>
int main()
{
    int num1, num2, i;
    long int power = 1;
    printf("Enter the two numbers:\n");
    scanf("%d%d", &num1, &num2);
    i = 1;
    while (i <= num2)
    {
        power = power * num1;
        i++;
    }
    printf("%d^%d is %ld\n", num1, num2, power);
    return 0;
}