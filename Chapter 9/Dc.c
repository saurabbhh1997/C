#include <stdio.h>

int main()
{
    int a[100], i, j, num;

    for (i = 0; i < 100; i++)
        a[i] = i + 1;

    for (i = 1; i < 100; i++)
    {
        if (a[i] == 0)
            continue;
        num = a[i];

        for (j = i + 1; j < 100; j++)
        {
            if (a[j] % num == 0)
                a[j] = 0;
        }
    }

    printf("\n");
    for (i = 0; i < 100; i++)
    {
        if (a[i] == 0 || a[i] == 1)
            continue;
        printf("%d\t", a[i]);
    }

    printf("\n");
    return 0;
}