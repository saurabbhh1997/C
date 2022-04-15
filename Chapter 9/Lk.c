#include <stdio.h>
void left_shift(int add[][5], int, int);

int main()
{
    int i, j, arr[4][5];
    printf("Enter a 4X5 matrix:\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
            scanf("%d", &arr[i][j]);
    }
    left_shift(arr, 4, 5);
    printf("\nAfter shift\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
    return 0;
}

void left_shift(int add[][5], int row, int col)
{
    int i, j;
    int _1st, _2nd;

    for (i = 0; i < row; i++)
    {
        _1st = add[i][0];
        _2nd = add[i][1];
        for (j = 0; j < (col - 2); j++)
        {
            add[i][j] = add[i][j + 2];
        }
        add[i][3] = _1st;
        add[i][4] = _2nd;
    }
}