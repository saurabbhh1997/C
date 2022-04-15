// Program for printing all C Characters using while loop
#include <stdio.h>
int main()
{
    int ch;
    ch = 0;
    while (ch <= 255)
    {
        printf("%d %c\n", ch, ch);
        ch++;
    }
    return 0;
}