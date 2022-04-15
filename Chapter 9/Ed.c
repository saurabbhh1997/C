#include <stdio.h>
int main()
{
    static int a[5];
    int i;
    for (i = 0; i <= 4; i++)
        printf("%d\n", a[i]);
    return 0;
}

// Output-----> 0 0 0 0 0