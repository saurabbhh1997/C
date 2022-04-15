// Write a program to print 24 hours of day with suitable suffixes like
// AM,PM,Noon and Midnight

#include <stdio.h>
int main()
{
    int hr;
    for (hr = 0; hr < 24; hr++)
    {
        if (hr == 0)
            printf("12 Midnight\n");
        if (hr > 0 && hr < 12)
            printf("%d AM\t", hr);
        if (hr == 12)
            printf("%d Noon\n", hr);
        if (hr > 12 && hr < 24)
            printf("%d PM\t", hr - 12);
    }
    return 0;
}