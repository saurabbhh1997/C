#include <stdio.h>
int main()
{
    int array[6] = {1, 2, 3, 4, 5, 6};
    int i;
    for (i = 0; i <= 25; i++)
        printf("%d\n", array[i]);
    return 0;
}

// Output----->No syntax error but some uncessory repetetion will occur and it will print some garbage value