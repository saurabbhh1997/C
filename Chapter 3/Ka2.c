//Special symbol or not using conditional operators

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c", &ch);
    (ch >= 0 && ch <= 47 || ch >= 58 && ch <= 64 || ch >= 91 && ch <= 96 || ch >= 123 && ch <= 127)
        ? printf("Special Symbol\n")
        : printf("Not a special symbol\n");
    return 0;
}