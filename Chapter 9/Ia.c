// Program to copy elements of one array to another array in reverse order

#include <stdio.h>
int main()
{
    int arr[5] = {13, 36, 25, 14, 65};
    int new_arr[5];
    int i, n = 4;
    for (i = 0; i <= 4; i++)
    {
        new_arr[i] = arr[n];
        n--;
    }
    printf("Old array:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("New array\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d ", new_arr[i]);
    }
    return 0;
}