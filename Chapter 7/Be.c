#include <stdio.h>
int main()
{
    float a = 25.345;
    float *b;
    b = &a;
    printf("%f %u\n", a, b);
    return 0;
}

// Output---->25.344999 6422216(address)
// No error