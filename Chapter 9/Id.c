#include <stdio.h>

void modify(int *, int);

int main()
{
    int i;
    int arr[10] = {12, 15, 3, 45, 23, 16, 19, 22, 17, 10};
    modify(arr, 10);
    for (i = 0; i < 10; i++)
        printf("%d ", arr[i]);
    return 0;
}

void modify(int *x, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        *(x + i) = *(x + i) * 3;
    }
}