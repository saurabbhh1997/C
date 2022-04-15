#include <stdio.h>
int main()
{
    int num[] = {44, 33, 55, 22, 11};
    int i, j, temp;
    for (i = 1; i <= 7; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (num[j + 1] < num[j])
            {
                temp = num[j + 1];
                num[j + 1] = num[j];
                num[j] = temp;
            }
        }
    }
    for (i = 0; i <= 4; i++)
        printf("%d ", num[i]);
    return 0;
}