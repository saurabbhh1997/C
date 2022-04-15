// Duplicate of strcat() function
// This function concatenates the source string into the target string

#include <stdio.h>
#include <string.h>
int xstrcat(char *, char *);

int main()
{
    char source[50];
    char target[200];

    puts("Enter source string");
    gets(source);
    puts("Enter target string");
    gets(target);
    xstrcat(target, source);
    printf("source string=%s\n", source);
    printf("target string=%s\n", target);
    return 0;
}

int xstrcat(char *t, char *s)
{

    while (*t != '\0')
        t++;
    while (*s != '\0')
    {
        *t = *s;
        s++;
        t++;
    }

    *t = '\0';
}
