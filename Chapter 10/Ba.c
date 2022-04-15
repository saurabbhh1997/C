#include <stdio.h>
#include <string.h>

int main()
{
    char *str1 = "United";
    char *str2 = "Front";
    char *str3;
    str3 = strcat(str1, str2);
    printf("%s\n", str3);
    return 0;
}

// Error.As the str3 is declared but not defined, so it is an only void pointer,
// so without allocating memory to it, we cannot store anything to it.