#include <stdio.h>
int main()
{
    int num[25];
    int i, j, temp;

    for (i = 0; i < 25; i++)
    {
        printf("Enter the number:");
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 23; i++)
    {
        for (j = i; j <= 23; j++)
        {
            if (num[i] > num[j + 1])
            {
                temp = num[i];
                num[i] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }

    printf("Selection-Sort\n");
    for (i = 0; i < 25; i++)
        printf("%d ", num[i]);
    return 0;
}