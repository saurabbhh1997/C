#include <stdio.h>
int main()
{
    unsigned a = 25;
    long unsigned b = 25l;
    printf("%lu %u\n", a, b);
    return 0;
}

// Output------> 25 25
// No error