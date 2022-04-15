#include <stdio.h>
int main()
{
    int arr[] = {'A', 'B', 'C', 'D'};
    int i;
    for (i = 0; i <= 3; i++)
        printf("%d", arr[i]);
    printf("\n");
    return 0;
}

// Error.The identifier should be %c