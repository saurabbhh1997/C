#include <stdio.h>
int main()
{
    int x, y;
    printf("Enter the value of X and Y:\n");
    scanf("%d%d", &x, &y);
    if (x == 0 && y == 0)
        printf("Point lies on the origin\n");
    else if (x != 0 && y == 0)
        printf("Point lies on the X-axis\n");
    else if (x == 0 && y != 0)
        printf("Point lies on Y-axis\n");
    else
        printf("Point neither lies on any axis nor origin\n");
    return 0;
}