#include <stdio.h>
#include <math.h>

int main()
{
    int i, n = 11;
    float x[] = {34.22, 39.87, 41.85, 43.23, 40.06, 53.29, 53.29, 54.14, 49.12, 40.71, 55.15};
    float y[] = {102.43, 100.93, 97.43, 97.81, 98.32, 98.32, 100.07, 97.08, 91.59, 94.85, 94.65};
    float r, sum_x, sum_y, sum_xsqr, sum_ysqr, sum_xy;
    sum_x = sum_y = sum_xy = sum_xsqr = sum_ysqr = 0;

    for (i = 0; i < n; i++)
    {
        sum_x = sum_x + x[i];
        sum_xsqr = sum_xsqr + (x[i] * x[i]);
        sum_y = sum_y + y[i];
        sum_ysqr = sum_ysqr + (y[i] * y[i]);
        sum_xy = sum_xy + (x[i] * y[i]);
    }
    r = (sum_xy - (sum_x * sum_y)) / sqrt((n * sum_xsqr - (sum_x * sum_x)) * (n * sum_ysqr - (sum_y * sum_y)));
    printf("\nCoefficient of correlation (r)=%2f\n\n", r);
    return 0;
}