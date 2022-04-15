#include <stdio.h>
#include <math.h>
float area(float, float, float);

int main()
{
    int i;
    float a[] = {137.4, 155.2, 149.3, 160.0, 155.6, 149.7};
    float b[] = {80.9, 92.62, 97.93, 100.25, 68.95, 120.0};
    float ang[] = {0.78, 0.89, 1.35, 9.00, 1.25, 1.75};
    float ar[6], big;

    for (i = 0; i < 6; i++)
        ar[i] = area(a[i], b[i], ang[i]);
    big = ar[0];

    for (i = 0; i < 6; i++)
    {
        if (ar[i] > big)
            big = ar[i];
        printf("%2f ", ar[i]);
    }

    printf("\n");
    printf("Biggest area=%2f\n", big);
    return 0;
}

float area(float a, float b, float angle)
{
    float ar;
    ar = (0.5) * a * b * sin(angle);
    return (ar);
}