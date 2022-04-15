// Sudoko game solution checking program

#include <stdio.h>
int main()
{
    int sudo[9][9] = {
        5, 3, 4, 6, 7, 8, 9, 1, 2,
        6, 7, 2, 1, 9, 5, 3, 4, 8,
        1, 9, 8, 3, 4, 2, 5, 6, 7,
        8, 5, 9, 7, 6, 1, 4, 2, 3,
        4, 2, 6, 8, 5, 3, 7, 9, 1,
        7, 1, 3, 9, 2, 4, 8, 5, 6,
        9, 6, 1, 5, 3, 7, 2, 8, 4,
        2, 8, 7, 4, 1, 9, 6, 3, 5,
        3, 4, 5, 2, 8, 6, 1, 7, 9};
    int i, j, sumrow, sumcol, sumgrid = 0, error = 0, n, m;
    for (i = 0; i < 9; i++)
    {
        sumrow = 0;
        sumcol = 0;
        for (j = 0; j < 9; j++)
        {
            sumrow = sumrow + sudo[i][j];
            sumcol = sumcol + sudo[j][i];
        }
        if (sumcol != 45)
            error = 1;
        if (sumrow != 45)
            error = 1;
    }

    for (n = 0; n < 9; n += 3)
    {
        for (i = n; i <= n + 2; i++)
        {
            for (m = 0; m < 9; m += 3)
            {
                for (j = m; j <= m + 2; j++)
                {
                    sumgrid = sumgrid + sudo[i][j];
                }
            }
            if (sumgrid != 45)
                error = 1;
            // printf("sumgrid=%d\n", sumgrid);
            sumgrid = 0;
        }
    }
    if (error)
        printf("\nSolution is not correct\n\n");
    else
        printf("\nSolution is correct\n\n");

    return 0;
}