// Mean of two numbers

#include <stdio.h>
#define MEAN(a, b) ((a + b) / 2)

int main()
{
    float x, y;
    float mean;
    printf("Enter two numbers\n");
    scanf("%f%f", &x, &y);
    mean = MEAN(x, y);
    printf("Mean=%f\n", mean);
    return 0;
}