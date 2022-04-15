#include <stdio.h>
int main()
{
    int num, pos = 0, neg = 0, zero = 0;
    char ch = 'y';
    while (ch == 'y')
    {
        printf("Enter a number:");
        scanf("%d", &num);

        if (num > 0)
            pos = pos + 1;
        else if (num == 0)
            zero = zero + 1;
        else if (num < 0)
            neg = neg + 1;

        fflush(stdin);
        printf("Want to enter another(y/n):\n");
        scanf("%c", &ch);
    }

    printf("Negatives=%d\npositives=%d\nZeroes=%d\n", neg, pos, zero);
    return 0;
}