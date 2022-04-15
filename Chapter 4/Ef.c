//Program to print multiplication table entered by user

#include <stdio.h>
int main()
{
    int num, i, table;
    printf("Enter the number for multiplication table:");
    scanf("%d", &num);
    printf("Table of %d:\n", num);
    for (i = 1; i <= 10; i++)
    {
        table = num * i;
        printf("%d*%d=%d\n", num, i, table);
    }
    return 0;
}