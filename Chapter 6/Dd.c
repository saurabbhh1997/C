// To be a leap year, the year number must be divisible by four –
// except for end-of-century years, which must be divisible by 400.

#include <stdio.h>
void leap(int);

int main()
{
    int year;
    printf("Enter the year:\n");
    scanf("%d", &year);
    leap(year);
    return 0;
}

void leap(int x)
{
    if (x % 400 == 0 || x % 100 != 0 && x % 4 == 0)
        printf("Leap year\n");
    else
        printf("Not a leap year\n");
}