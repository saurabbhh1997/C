#include <stdio.h>
void jiaayjo(int, int);

int main()
{
    int p = 23, f = 24;
    jiaayjo(&p, &f);
    printf("%d %d\n", p, f);
    return 0;
}

void jiaayjo(int q, int g)
{
    q = q + q;
    g = g + g;
}

// No eerors but some warnings as we are passing addresses without declaring it as pointer
// prints 23 24