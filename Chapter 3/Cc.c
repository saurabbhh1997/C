// Leap year

#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);
    if (year % 100 == 0)
    {
        if (year % 400 == 0)
            printf("%d year is a leap year\n", year);
        else
            printf("%d year is not a leap year\n", year);
    }
    else
    {
        if (year % 4 == 0)
            printf("%d year is a leap year\n", year);
        else
            printf("%d year is not a leap year\n", year);
    }
    return 0;
}