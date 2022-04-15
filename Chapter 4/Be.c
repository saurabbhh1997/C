#include <stdio.h>
int main()
{
    int i = 1, a, b, c;
    printf("Armstrong number between 1 and 500 are:\n");
    while (i <= 500)
    {
        a = i % 10; // First digit
        b = i % 100;
        b = (b - a) / 10; // Second digit
        c = i / 100;      // Third digit

        if ((a * a * a) + (b * b * b) + (c * c * c) == i)
            printf("%d\n", i);

        i++;
    }

    return 0;
}