#include <stdio.h>

int main()
{
    float a = 5, b = 2;
    int c, d;
    // c=a%b;  // % can't be applied on floats
    d = a / 2;
    printf("%d\n", d);
    return 0;
}