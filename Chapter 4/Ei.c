#include <stdio.h>
#include <math.h>
int main()
{
    int k = 4, i, j, num;
    for (i = 0; i <= 4; i++)
    {
        num = pow(11, i);

        for (j = k; j; j--)
            printf("\t");

        k--;

        while (num)
        {
            printf("%d\t\t", num % 10);
            num /= 10;
        }
        printf("\n\n");
    }
    return 0;
}