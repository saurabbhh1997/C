// Upper case check

#include <stdio.h>
#define UP(ch) (ch >= 65 && ch <= 90)

int main()
{
    char c;
    printf("Enter a charcter:\n");
    scanf("%c", &c);
    if (UP(c) == 1)
        printf("upper case letter\n");
    else
        printf("not a upper case letter\n");
    return 0;
}