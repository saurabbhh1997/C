#include <stdio.h>
int main()
{
    int n[3][3] = {
        2, 4, 3,
        6, 8, 5,
        3, 5, 1};
    int i, j;
    for (i = 0; i <= 2; i++)
        for (j = 0; j <= 2; j++)
            printf("\n%d %d", n[i][j], *(*(n + i) + j));
    return 0;
}

// Output---->2 2 4 4 3 3 6 6 8 8 5 5 3 3 5 5 1 1