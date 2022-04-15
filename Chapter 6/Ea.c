#include <stdio.h>
#define pi 3.14
float circle(int);

int main()
{
    float area;
    int radius = 1;
    area = circle(radius);
    printf("%f\n", area);
    return 0;
}

float circle(int r)
{
    float a;
    a = pi * r * r;
    return (a);
}

// Output----->3.140000