#include <stdio.h>
int main()
{
    int i, j, k, sum;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= 3; j++)
        {
            for (k = 1; k <= 3; k++)
            {
                sum = (i + j + k);
                if (sum == 6 && (i != j) && (j != k))
                    printf("%d %d %d\n", i, j, k);
            }
        }
    }
    return 0;
}