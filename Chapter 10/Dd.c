#include <stdio.h>
int main()
{
    char str[20];
    int i, num, tot = 0;
    printf("Enter a string of numbers : ");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        num = str[i] - 48;
        tot = tot * 10 + num;
    }
    printf("\nNumber : %d", tot);
    return 0;
}
