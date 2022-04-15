#include <stdio.h>

int main()
{
    int bs;
    float da, hra, gs;
    printf("Enter the basic salary:\n");
    scanf("%d", &bs);
    da = bs * 0.4;
    hra = bs * 0.2;
    gs = bs + da + hra;
    printf("Gross salary=%f", gs);
    return 0;
}