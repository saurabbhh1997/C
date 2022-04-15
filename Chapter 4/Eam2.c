//Program to print prime numbers between 1 and 300

#include <stdio.h>
int main()
{
    int i, j, flag;
    for (i = 1; i <= 300; i++)
    {
        flag = 1;
        for (j = 2; j <= (i / 2); j++)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }
        if (j > (i / j) && i != 1)
            printf("%d ", i);
    }
    return 0;
}