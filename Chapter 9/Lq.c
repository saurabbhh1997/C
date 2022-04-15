#include <stdio.h>
#include <math.h>

int main()
{
    int i;
    float x[10], y[10], dis = 0;
    printf("\nEnter X and Y cordinates for 10 points:\n");

    for (i = 0; i < 10; i++)
        scanf("%f%f", &x[i], &y[i]);

    for (i = 0; i < 10; i++)
        dis += sqrt(pow((x[i + 1] - x[i]), 2) + pow((y[i + 1] - y[i]), 2));
    printf("Distance b/w first and last point= %f\n", dis);
    return 0;
}