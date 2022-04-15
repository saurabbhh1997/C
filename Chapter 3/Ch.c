//Absolute value of a number

#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);
    if (num < 0)
        num = num * (-1);
    printf("Absolute value of number is:%d\n", num);
    return 0;
}