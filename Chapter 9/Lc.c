#include <stdio.h>
int main()
{
    int arr[4][4] = {
        {12, 13, 14, 15},
        {16, 85, 96, 48},
        {54, 65, 89, 56},
        {18, 61, 68, 36}};
    int i, j;
    int tran[4][4];
    // for (i = 0; i < 4; i++)
    // {
    //     for (j = 0; j < 4; j++)
    //     {
    //         printf("Enter the element:");
    //         scanf("%d", &arr[i][j]);
    //     }
    // }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            tran[i][j] = arr[j][i];
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", tran[i][j]);
        }
        printf("\n");
    }
    return 0;
}