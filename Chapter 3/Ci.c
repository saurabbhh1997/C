#include <stdio.h>
int main()
{
    int len, bre, area, peri;
    printf("Enter the length and breadth of rectangle:\n");
    scanf("%d%d", &len, &bre);
    area = len * bre;
    peri = 2 * (len + bre);
    if (area > peri)
        printf("Area of rectangle is greater than it's perimeter\n");
    else
        printf("Area of rectangle is lesser than it's perimeter\n");
    return 0;
}