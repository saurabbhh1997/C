// Alphabet or not

#include <stdio.h>
#define ALP(ch) ((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
int main()
{
    char c;
    printf("Enter a charcter:\n");
    scanf("%c", &c);
    if (ALP(c) == 1)
        printf("An alphabet\n");
    else
        printf("not an alphabet\n");
    return 0;
}