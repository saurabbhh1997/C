#include <stdio.h>
#include <math.h>

int main()
{
    int i, sum = 0, a[] = {-6, -12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
    double mean, std = 0;
    for (i = 0; i < 15; i++)
        sum = sum + a[i];
    mean = (double)sum / 15;
    printf("Mean=%lf\n", mean);

    for (i = 0; i < 15; i++)
    {
        std = std + ((a[i] - mean) * (a[i] - mean));
    }
    std = sqrtf(std / 15);
    printf("Standard deviation=%lf\n", std);
    return 0;
}