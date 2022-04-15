#include <stdio.h>
#include <conio.h>
#define SIZE 3

int main()
{
    int sqr[SIZE][SIZE];
    int i, j;

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            printf("Enter the element:");
            scanf("%d", &sqr[i][j]);
        }
    }

    for (i = 0; i < SIZE; i++)
    {
        for (j = 0; j < SIZE; j++)
        {
            if (sqr[i][j] != sqr[j][i])
            {
                printf("\nNot a symmetric matrix\n");
                getch();
                return 0;
            }
            else
                continue;
        }
    }

    if (i == SIZE)
        printf("\nMatrix is symmetric\n");

    return 0;
}