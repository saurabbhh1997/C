#include <stdio.h>
int main()
{
    int sub[50], i;
    for (i = 1; i <= 50; i++)
    {
        sub[i] = i;
        printf("%d\n", sub[i]);
    }
    return 0;
}

// Output----No syntax error but loop counter should intiliased with 0 to <49
// or it may crash due to overflow