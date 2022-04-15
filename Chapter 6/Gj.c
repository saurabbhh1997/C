#include <stdio.h>
#include <math.h>
float area(int, int, int);

int main()
{
    int a, b, c;
    float ar;
    printf("Enter the length of three sides of triangle:\n");
    scanf("%d%d%d", &a, &b, &c);
    if (a + b > c && b + c > a && a + c > b)
    {
        ar = area(a, b, c);
        printf("Area of triangle=%f\n", ar);
        // printf("\n\nArea of the triangle : %f", ar);
    }
    else
        printf("\n\nThe triangle you entered is invalid.");
    return 0;
}

float area(int x, int y, int z)
{
    float a, s;
    s = (x + y + z) / 2;
    a = sqrt(s * (s - x) * (s - y) * (s - z));
    return (a);
}