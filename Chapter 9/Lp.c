#include <stdio.h>
int main()
{
    int i, n = 10;
    float set[][2] = {
        {3.0, 1.5},
        {4.5, 2.0},
        {5.5, 3.5},
        {6.5, 5.0},
        {7.5, 6.0},
        {8.5, 7.5},
        {8.0, 9.0},
        {9.0, 10.5},
        {9.5, 12.0},
        {10.0, 14.0}};
    float a, b, sum_x, sum_y, sum_xy, sum_xsqr, xbar, ybar;
    sum_x = sum_y = sum_xy = sum_xsqr = 0;
    for (i = 0; i < n; i++)
    {
        sum_x = sum_x + set[i][0];
        sum_y = sum_y + set[i][1];
        sum_xy = sum_xy + (set[i][0] * set[i][1]);
        sum_xsqr = sum_xsqr + (set[i][0] * set[i][0]);
    }
    xbar = sum_x / n;
    ybar = sum_y / n;
    b = (n * sum_xy - (sum_x * sum_y)) / (n * sum_xsqr - (sum_x * sum_x));
    a = ybar - b * xbar;

    printf("\nRequired straight line equation\ny= %.2f + %.2fx\n", a, b);
    return 0;
}