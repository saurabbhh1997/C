#include <stdio.h>
int main()
{
    int size, i;
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i <= size; i++)
    {
        scanf("%d", arr[i]);
        printf("%d\n", arr[i]);
    }
    return 0;
}

// Output--->It will not give any error but program would not work because & in scanf is missing
// And size not be in a variable form