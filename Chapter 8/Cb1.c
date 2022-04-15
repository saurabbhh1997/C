// Lower case check

#include <stdio.h>
#define SM(ch) (ch >= 97 && ch <= 122)

int main()
{
    char c;
    printf("Enter a charcter:\n");
    scanf("%c", &c);
    if (SM(c) == 1)
        printf("small case letter\n");
    else
        printf("not a small case letter\n");
    return 0;
}