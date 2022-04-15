#include <stdio.h>
int main()
{
    float a = 15.5;
    char ch = 'C';
    // printf(a, ch);
    return 0;
}

printit(a, ch)
{
    printf("%f %c\n", a, ch);
}

// Errors--first prototype of fun printit is not declared
//  second double commas are not used in printf fun