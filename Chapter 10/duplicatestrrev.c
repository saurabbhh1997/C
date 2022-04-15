#include <stdio.h>
#include <string.h>
void xstrrev(char *);

int main()
{
    char string[100];
    puts("Enter the sting:");
    gets(string);
    printf("Original string=%s\n", string);
    xstrrev(string);
    printf("Reversed string=%s\n", string);
    return 0;
}

void xstrrev(char *p)
{
    char temp;
    int len = 0, i;
    len = strlen(p);
    for (i = 0; i < len / 2; i++)
    {
        temp = p[i];
        p[i] = p[len - i - 1];
        p[len - i - 1] = temp;
    }
}