// Duplicate of strcpy() function
// This function copies the contents of one string into another

#include <stdio.h>
#include <string.h>
int xstrcpy(char *, const char *);

int main()
{
    char source[30];
    char target[30];
    puts("Enter your full name");
    gets(source);
    xstrcpy(target, source);
    printf("source string=%s\n", source);
    printf("target string=%s\n", target);
    return 0;
}

int xstrcpy(char *t, const char *s)
{

    while (*s != '\0')
    {
        *t = *s;
        s++;
        t++;
    }
    *t = '\0';
}