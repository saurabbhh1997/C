#include <stdio.h>

int main()
{
    float x = 3.5, R;
    R = x * x + 2 * x + 1 / 2 * x * x + x + 1;
    printf("R=%f", R);
    return 0;
}