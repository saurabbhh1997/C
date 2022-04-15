#include <stdio.h>
int main()
{
    int num[25];
    int i, pos, neg, even, odd;
    pos = neg = odd = even = 0;
    for (i = 0; i < 25; i++)
    {
        printf("Enter the number:");
        scanf("%d", &num[i]);
    }

    for (i = 0; i < 25; i++)
    {
        if (num[i] < 0)
            neg++;
        else
            pos++;

        if (num[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Positive numbers=%d\tNegative numbers=%d\n", pos, neg);
    printf("Even numbers=%d\tOdd numbers=%d\n", even, odd);
    return 0;
}