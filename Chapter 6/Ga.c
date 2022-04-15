#include <stdio.h>
#include <math.h>
void function(int, int, int, int, int);

int main()
{
    int n1, n2, n3, n4, n5;
    printf("Enter five numbers:\n");
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
    function(n1, n2, n3, n4, n5);
    return 0;
}

void function(int x1, int x2, int x3, int x4, int x5)
{
    float sum, avg, std;
    sum = x1 + x2 + x3 + x4 + x5;
    avg = sum / 5;
    printf("Sum=%f\nAverage=%f\n", sum, avg);
    x1 = (x1 - avg) * (x1 - avg);
    x2 = (x2 - avg) * (x2 - avg);
    x3 = (x3 - avg) * (x3 - avg);
    x4 = (x4 - avg) * (x4 - avg);
    x5 = (x5 - avg) * (x5 - avg);
    sum = x1 + x2 + x3 + x4 + x5;
    avg = sum / 5;
    std = sqrt(avg);
    printf("Standard deviation=%f", std);
}