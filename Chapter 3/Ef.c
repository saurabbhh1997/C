#include <stdio.h>
int main()
{
    int i = -1, j = 1, k, l;
    k = !i && j;
    l = !i || j;
    printf("%d %d\n", i, j);
    return 0;
}

//Answer--------->-1 1 would be printed