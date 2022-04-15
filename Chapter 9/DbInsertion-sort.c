#include <stdio.h>
int main()
{
    int num[5];
    int i, j, temp;
    for (i = 0; i < 5; i++)
    {
        printf("Enter the number:");
        scanf("%d", &num[i]);
    }
    for (i = 1; i <= 5; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (num[j + 1] < num[j])
            {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
            }
        }
    }
    printf("Selection-Sort\n");
    for (i = 0; i < 5; i++)
        printf("%d ", num[i]);
    return 0;
}