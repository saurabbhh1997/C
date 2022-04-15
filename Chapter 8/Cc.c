#include <stdio.h>
#include "areaperi.h"

int main()
{
    int a, b, c, side;
    double rad, semi, area_cir, peri_cir, area_sqr, peri_sqr, area_tri, peri_tri;
    printf("Enter the three sides of triangle:\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("Enter the side of square:\n");
    scanf("%d", &side);
    printf("Enter the radius of circle:\n");
    scanf("%lf", &rad);
    semi = (a + b + c) / 2;
    area_tri=AREA_TRI(a,b,c));
    peri_tri = PERI_TRI(a, b, c);
    area_sqr = AREA_SQR(side);
    peri_sqr = PERI_SQR(side);
    area_cir = AREA_CIR(rad);
    peri_cir = PERI_CIR(rad);
    printf("Area of Triangle=%lf\tPerimater of Triangle=%lf\n", area_tri, peri_tri);
    printf("Area of Square=%lf\tPerimater of Square=%lf\n", area_sqr, peri_sqr);
    printf("Area of Circle=%lf\tPerimater of Circle=%lf\n", area_cir, peri_cir);
    return 0;
}