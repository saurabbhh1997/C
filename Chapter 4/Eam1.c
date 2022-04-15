//Program to print prime numbers between 1 and 300
//It doesn't print 2 which is the first and only even prime number

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 300; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0&&i!=2)
                break;
            else if (j == (i - 1))
                printf("%d\t", i);
        }
    }
    return 0;
}