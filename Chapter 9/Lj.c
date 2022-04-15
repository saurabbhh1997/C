// Program to multiply two 3X3 matrices

#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], mul[3][3];
    int i, j, k;

    printf("Enter the elements of first 3X3 Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the elements of second 3X3 Matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (k = 0; k < 3; k++)
    {
        for (i = 0; i < 3; i++)
        {
            mul[k][i] = 0;
            for (j = 0; j < 3; j++)
            {
                mul[k][i] = mul[k][i] + a[k][j] * b[j][i];
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}