#include <stdio.h>
int main()
{
    float a[] = {13.24, 1.5, 1.5, 5.4, 3.5};
    float *j;
    j = a;
    j = j + 4;
    printf("%d %d %d\n", j, *j, a[3]);
    printf("%d %f %f\n", j, *j, a[4]);
    return 0;
}

// Output--->6422216(Address) 0 1074528256
// No syntax error but logical error as identifier for float is %f