#include <stdio.h>
#include <string.h>

int main()
{
    char isbn[15];
    int i, sum = 0, check_sum;
    printf("Enter a 10 digit ISBN number:");
    gets(isbn);
    for (i = 9; i >= 0; i--)
    {
        isbn[i] = isbn[i] - 48;
        sum = sum + (9 - i + 1) * isbn[i];
    }
    if (sum % 11 == 0)
        printf("Valid ISBN number\n");
    else
        printf("Not a valid ISBN number\n");
    return 0;
}