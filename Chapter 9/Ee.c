#include <stdio.h>
int main()
{
    int a[5] = {5, 1, 15, 20, 25};
    int i, j, k = 1, m;
    i = ++a[1];
    j = a[1]++;
    m = a[i++];
    printf("%d %d %d\n", i, j, m);
    return 0;
}

// Output----> 3 2 15