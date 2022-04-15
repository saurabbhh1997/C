#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float x, y, r, theta;
    printf("Enter the value of Cartesian co-ordinates:\n");
    scanf("%f%f", &x, &y);
    r = sqrt(x * x + y * y);
    theta = atan2(y, x);
    theta = theta * 180 / 3.14;
    printf("r=%f theta=%f", r, theta);
    return 0;
}
    