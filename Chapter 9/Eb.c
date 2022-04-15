#include <stdio.h>
int main()
{
    int b[] = {0, 20, 0, 40, 5};
    int i, *k;
    k = b;
    for (i = 0; i <= 4; i++)
    {
        // printf("%d\n" *k);
        k++;
    }
    return 0;
}

// there should be comma in printf before *k
// Output----->0 20 0 40 5