#include <stdio.h>
int main()
{
    int num, i, fact = 1;
    printf("Enter the number\n");
    scanf("%d", &num);
    i = num;
    while (i > 0 && i <= num)
    {
        fact = fact * i;
        i--;
    }
    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}