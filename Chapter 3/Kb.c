//Leap year using conditional operators

#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);
    (year % 100 == 0)
        ? (year % 400 == 0 ? printf("%d is a leap year\n", year) : printf("%d is not a leap year\n",year))
        : (year % 4 == 0) 
                      ? printf("%d is a leap year\n",year)
                      : printf("%d is not a leap year\n",year);
    return 0;
}