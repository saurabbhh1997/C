// Biger of two numbers

#include <stdio.h>
#define BIG(a, b)                    \
    if (a > b)                       \
        printf("%d is Bigger\n", a); \
    else                             \
        printf("%d is Bigger\n", b);

int main()
{
    int x, y;
    printf("Enter two numbers\n");
    scanf("%d%d", &x, &y);
    BIG(x, y);
    return 0;
}