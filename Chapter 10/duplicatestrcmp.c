// Duplicate of strcmp() function
// This function compares two stings character by character

#include <stdio.h>
#include <string.h>
int xstrcmp(char *, char *);

int main()
{
    char s1[50];
    char s2[50];
    int i;
    puts("Enter the first string:");
    gets(s1);
    puts("Enter the second string:");
    gets(s2);
    i = xstrcmp(s1, s2);
    printf("%d\n", i);
    return 0;
}

int xstrcmp(char *s, char *t)
{
    while (*s != '\0' && *t != '\0' && *s == *t)
    {
        s++;
        t++;
    }
    if (*s == *t)
        return 0;
    else
        return *s - *t;
}
