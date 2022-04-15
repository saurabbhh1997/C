// Duplicate of strlen() function
// This function counts the number of characters presents in a string

#include <stdio.h>
#include <string.h>
int xstrlen(char *);

int main()
{
    char name[30];
    int len;
    puts("Enter your full name");
    gets(name);
    len = xstrlen(name);
    printf("string=%s length=%d\n", name, len);
    return 0;
}

int xstrlen(char *a)
{
    int length = 0;
    while (*a != '\0')
    {
        length++;
        a++;
    }
    return (length);
}