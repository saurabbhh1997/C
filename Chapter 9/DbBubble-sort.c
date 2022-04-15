#include <stdio.h>
int main()
{
    int num[25];
    int i, j, n = 23, temp;

    for (i = 0; i < 25; i++)
    {
        printf("Enter the number:");
        scanf("%d", &num[i]);
    }
    for (i = 0; i <= 23; i++)
    {
        for (j = 0; j <= n; j++)
        {
            if (num[j] > num[j + 1])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
        n--;
    }

    printf("Bubble-Sort\n");
    for (i = 0; i < 25; i++)
        printf("%d ", num[i]);
    return 0;
}