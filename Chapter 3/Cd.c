//Day on first january of any year

#include <stdio.h>
int main()
{
    int leap_days, first_day, year;
    long int normal_days, total_days;
    printf("Enter year\n");
    scanf("%d", &year);
    normal_days = (year - 1) * 365;
    leap_days = (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
    total_days = normal_days + leap_days;
    first_day = total_days % 7;
    if (first_day == 0)
        printf("Monday\n");
    if (first_day == 1)
        printf("Tuesday\n");
    if (first_day == 2)
        printf("Wednesday\n");
    if (first_day == 3)
        printf("Thursday\n");
    if (first_day == 4)
        printf("Friday\n");
    if (first_day == 5)
        printf("Saturday\n");
    if (first_day == 6)
        printf("sunday\n");
    return 0;
}