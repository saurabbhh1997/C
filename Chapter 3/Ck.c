#include <stdio.h>
#include <math.h>

int main()
{
    // Let center of the circle is (x,y) which is(0,0)
    int x = 0, y = 0;
    int x1, y1, r, dis;
    printf("Enter the value of X and Y:\n");
    scanf("%d%d", &x1, &y1);
    printf("Enter the value of radius:\n");
    scanf("%d", &r);
    dis = sqrt((x1 * x1) - (x * x) + (y1 * y1) - (y * y));
    if (dis < r)
        printf("Point lies inside the circle\n");
    else if (dis == r)
        printf("Point lies on the circle\n");
    else
        printf("Point lies outside the circle\n");
    return 0;
}