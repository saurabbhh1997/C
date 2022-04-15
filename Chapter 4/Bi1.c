//Range of set of numbers(Method-1)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int flag, big, small, num, n, range;
    flag = 0;
    printf("Enter the length of set:");
    scanf("%d", &n);
    while (n > 0)
    {
        printf("Enter the number:");
        scanf("%d", &num);

        if (flag == 0)
        {
            small = big = num;
            flag = 1;
        }
        else
        {
            if (num > big)
                big = num;
            if (num < small)
                small = num;
        }
        n--;
    }
    range = big - small;
    printf("Range of given set is %d", abs(range));
    return 0;
}