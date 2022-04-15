#include <stdio.h>
int main()
{
    int arr[25];
    int i, min;
    int *ptr;
    min = arr[0];

    for (i = 0; i < 25; i++)
    {
        printf("Enter the element:");
        scanf("%d", &arr[i]);
    }
    ptr = arr;

    for (i = 0; i < 25; i++)
    {
        if (*(ptr + i) < min)
            min = *(ptr + i);
    }
    printf("Smallest element of the array=%d\n", min);
    return 0;
}