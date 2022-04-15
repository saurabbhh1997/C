#include <stdio.h>

int main()
{
    int len, bre, rad, area_rect, peri;
    float area_cir, circum;
    printf("Enter length and bredth of rectangle:\n");
    scanf("%d%d", &len, &bre);
    printf("Enter radius of circle:\n");
    scanf("%d", &rad);
    area_rect = len * bre;
    peri = 2 * len + 2 * bre;
    area_cir = 3.14 * rad * rad;
    circum = 2 * 3.14 * rad;
    printf("Area and perimeter of rectangle=%d %d\n", area_rect, peri);
    printf("Area and circumference of circle=%f %f\n", area_cir, circum);
    return 0;
}
