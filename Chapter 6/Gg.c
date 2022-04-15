#include <stdio.h>

int sum(int);

int main()
{
    int ans = sum(25);
    printf("Running sum of the numbers : %d", ans);
    return 0;
}

int sum(int x)
{
    if (x == 0)
        return x;
    x = x + sum(x - 1);
    return x;
}