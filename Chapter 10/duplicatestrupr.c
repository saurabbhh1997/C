// Duplicate of strlwr() function
// This function converts a string to uppercase

#include <stdio.h>
#include <string.h>
int xstrlwr(char *);

int main()
{
    char name[30];
    puts("Enter your full name");
    gets(name);
    xstrlwr(name);
    printf("string=%s\n", name);
    return 0;
}

int xstrlwr(char *a)
{

    while (*a != '\0')
    {
        if (*a >= 'a' && *a <= 'z')
            *a = *a - 32;
        a++;
    }
}