// Duplicate of strcpy() function
// This function copies the first n characters of one string into another

#include <stdio.h>
#include <string.h>
int xstrcpy(char *, const char *, int);

int main()
{
    int n;
    char source[30];
    char target[30];
    puts("Enter the source string");
    gets(source);
    printf("Enter the number of characters to be copied:");
    scanf("%d", &n);
    xstrcpy(target, source, n);
    printf("source string=%s\n", source);
    printf("target string=%s\n", target);
    return 0;
}

int xstrcpy(char *t, const char *s, int n)
{
    int i = 0;

    while (i < n)
    {
        *t = *s;
        s++;
        t++;
        i++;
    }
    *t = '\0';
}