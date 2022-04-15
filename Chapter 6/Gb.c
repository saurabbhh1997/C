#include <stdio.h>
void function(int, int, int, float *, float *);

int main()
{
    int a, b, c;
    float avg, per;
    printf("Enter the marks of three subjects:\n");
    scanf("%d%d%d", &a, &b, &c);
    function(a, b, c, &avg, &per);
    printf("Average=%f\nPercentage=%f%%\n", avg, per);
    return 0;
}

void function(int x, int y, int z, float *g, float *h)
{
    *h = (x + y + z) / 3;
    *g = (x + y + z) / 3;
}