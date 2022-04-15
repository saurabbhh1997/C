// Program is not correctly working

#include <stdio.h>
#include <math.h>
int determinant(int order, int *firstElement);

int main()
{
    int i, j, sum;
    int mat[6][6] = {
        {1, 2, 3, 4, 5, 6},
        {1, 2, 3, 4, 5, 6},
        {1, 2, 3, 4, 5, 6},
        {1, 2, 3, 4, 5, 6},
        {1, 2, 3, 4, 5, 6},
        {1, 2, 3, 4, 5, 6}};
    sum = determinant(6, mat);
    printf("Determinant= %d\n", sum);
    return 0;
}
int determinant(int n, int *arr)
{
    int i, j, k, sum = 0, arr1[n - 1][n - 1];
    if (n > 1) // recursive case
    {
        for (i = 0; i < n; i++) // iterating along the first row
        {
            for (j = 0; j < n; j++) // creating the smaller matrix
            {
                if (j != i)
                {
                    for (k = 1; k < n; k++)
                    {
                        if (j < i)
                            arr1[k - 1][j] = *(arr + j + n * k);
                        else
                            arr1[k - 1][j - 1] = *(arr + j + n * k);
                    }
                }
            }
            sum = sum + pow(-1, i) * (*(arr + i)) * (determinant(n - 1, arr1));
            /*finally taking the sum, and passing the second matrix in another determinant function*/
        }
        return sum;
    }
    else
        return *arr;
}