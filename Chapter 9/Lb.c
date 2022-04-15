#include <stdio.h>
int main()
{
    int arr[5][5];
    int i, j;
    int large = arr[0][0];

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("Enter the element:");
            scanf("%d", &arr[i][j]);
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (arr[i][j] > large)
                large = arr[i][j];
        }
    }
    printf("Largest number in array=%d\n", large);
    return 0;
}