#include <stdio.h>
static int y;

int main()
{
    static int z;
    printf("%d %d\n", y, z);
    return 0;
}

// Output------->0 0 becuause default intial value for static is 0
// No error