// Absolute value of a number

#include <stdio.h>
#define ABS(a) \
    if (a < 0) \
        a = a * (-1);

int main()
{
    int num;
    printf("Enter a real number\n");
    scanf("%d", &num);
    ABS(num);
    printf("Absolute value=%d\n", num);
    return 0;
}