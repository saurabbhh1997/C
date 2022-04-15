#include <stdio.h>
int main()
{
    int array[26], i;

    for (i = 0; i <= 25; i++)
    {
        array[i] = 'A' + i;
        printf("%d %c\n", array[i], array[i]);
    }
    return 0;
}

// Output-->WIll print 65-90 and A-Z