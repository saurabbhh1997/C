#include <stdio.h>
int main()
{
    int a[] = {10, 20, 30, 40, 50};
    int j;
    j = a;
    j = j + 3;
    // printf("%d\n", *j);
    return 0;
}

// Output----->Error as j is not declared as a pointer