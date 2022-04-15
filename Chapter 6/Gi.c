#include <stdio.h>
void cir_shift(int *, int *, int *);
int main()
{
    int x, y, z;
    int *p, *q, *r;
    p = &x;
    q = &y;
    r = &z;
    printf("Enter three numbers:\n");
    scanf("%d%d%d", &x, &y, &z);
    cir_shift(p, q, r);
    printf("x=%d y=%d z=%d\n", x, y, z);
    return 0;
}

void cir_shift(int *a, int *b, int *c)
{
    int x;
    x = *c;
    *c = *b;
    *b = *a;
    *a = x;
}