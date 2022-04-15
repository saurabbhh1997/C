// Uppercase to lowercase

#include <stdio.h>
#define CONLOW(x) (x + 32)

int main()
{
    char ch, new_ch;
    printf("Enter an uppercase alphabet:\n");
    scanf("%c", &ch);
    new_ch = CONLOW(ch);
    printf("Lowercase=%c\n", new_ch);
    return 0;
}