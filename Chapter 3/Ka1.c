//Lower Case alphabet or not using condional operators

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet\n");
    scanf("%c", &ch);
    (ch >= 97 && ch <= 122 ? printf("Lower case alphabet\n") : printf("Not lower case alphabet\n"));
    return 0;
}