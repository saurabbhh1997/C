#include <stdio.h>
int main()
{
    int i = 2;
#ifdef DEF
    i *= i;
#else
    printf("%d\n", i);
#endif
    return 0;
}

// Output----------->2