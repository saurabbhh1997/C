#include <stdio.h>
int main()
{ // i for first loop to print A to G
    // j for second or space loop
    // k for third loop to print from  F to A
    int i, j, k;

    // a to contol upadation counter in first loop
    // b to contol upadation counter in second loop
    // c to contol upadation counter in third loop
    int a = 71, b = 1, c = 71;

    // l to control the number of rows
    int l;

    for (l = 1; l <= 7; l++)
    {
        for (i = 65; i <= a; i++)
            printf("%c", i);

        if (l > 1)
        {
            for (j = 1; j <= b; j++)
                printf(" ");
            b = b + 2;
        }

        for (k = c; k >= 65; k--)
        {
            if (k == 71)
                continue;
            printf("%c", k);
        }

        printf("\n");
        a--;
        c--;
    }
    return 0;
}