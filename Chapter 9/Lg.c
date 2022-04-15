#include <stdio.h>
int main()
{
    unsigned int arr[3][3] = {
        2, 4, 6,
        9, 1, 10,
        16, 64, 5};
    printf("%d\n", **arr);
    printf("%d\n", **arr < *(*arr + 2));
    // printf("%d\n", *(arr + 2) / (*(*arr + 1) > **arr));
    printf("%d\n", *(arr[1] + 1) | arr[1][2]);
    printf("%d\n", *(arr[0]) | *(arr[2]));
    printf("%d\n", arr[1][1] < arr[0][1]);
    printf("%d\n", arr[2][1] & arr[2][0]);
    printf("%d\n", arr[2][2] | arr[0][1]);
    printf("%d\n", arr[0][1] ^ arr[0][2]);
    printf("%d\n", ++**arr + --arr[1][1]);
    return 0;
}

// Output--->
/*
1--->2
2--->1
3--->gives error that "expression must have arithmetic type"
4--->11
5--->18
6--->1
7--->0
8--->5
9--->2
10--->3
*/