#include <stdio.h>

void swap(int *, int *);

int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, i;

    for (i = 0; i < 10 - 1; i += 2)
        swap(&a[i], &a[i + 1]);

    for (i = 0; i < 10; i++)
        printf("%d\t", a[i]);
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}