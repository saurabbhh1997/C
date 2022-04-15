// Year to Roman equivalent

#include <stdio.h>
int roman(int);

int main()
{
    int year;
    printf("Enter the year\n");
    scanf("%d", &year);
    printf("Roman equivalent:\n");
    roman(year);
    return 0;
}

int roman(int x)
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        if (x >= 1000)
        {
            printf("M");
            x = x - 1000;
        }
    }
    for (i = 1; i <= 10; i++)
    {
        if (x >= 500)
        {
            printf("D");
            x = x - 500;
        }
    }
    for (i = 1; i <= 10; i++)
    {
        if (x >= 100)
        {
            printf("C");
            x = x - 100;
        }
    }
    for (i = 1; i <= 10; i++)
    {
        if (x >= 50)
        {
            printf("L");
            x = x - 50;
        }
    }
    for (i = 1; i <= 10; i++)
    {
        if (x >= 10)
        {
            printf("X");
            x = x - 10;
        }
    }
    for (i = 1; i <= 10; i++)
    {
        if (x >= 5)
        {
            printf("V");
            x = x - 5;
        }
    }
    for (i = 1; i <= x; i++)
    {
        printf("I");
    }
    return 0;
}