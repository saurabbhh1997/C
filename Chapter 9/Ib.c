#include <stdio.h>

#define n 6
int main()
{
    int arr[n] = {1, 2, 3, 4, 2, 1}, i, j;

    for (i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        if (arr[i] == arr[j])
            printf("\narr[%d] and arr[%d] are equal.", i, j);
        else
            printf("\narr[%d] and arr[%d] are not equal.", i, j);
    }

    return 0;
}