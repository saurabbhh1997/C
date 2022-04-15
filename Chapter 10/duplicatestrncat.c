// Duplicate of strncat() function
// This function appends first n characters of a string into another string

#include <stdio.h>
#include <string.h>
int xstrncat(char *, char *, int);

int main()
{
    char source[50];
    char target[200];
    int n;

    puts("Enter source string");
    gets(source);
    puts("Enter target string");
    gets(target);
    printf("Enter the number of characters to be concatenated:");
    scanf("%d", &n);
    // strncat(target, source, 5);
    xstrncat(target, source, n);
    printf("source string=%s\n", source);
    printf("target string=%s\n", target);
    return 0;
}

int xstrncat(char *t, char *s, int n)
{
    int i = 0;
    while (*t != '\0')
        t++;
    while (i < n)
    {
        *t = *s;
        s++;
        t++;
        i++;
    }

    *t = '\0';
}
