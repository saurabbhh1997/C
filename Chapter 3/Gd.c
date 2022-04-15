#include <stdio.h>
int main()
{
    int late_days, fine;
    printf("Enter the number of Day's late:\n");
    scanf("%d", &late_days);
    if (late_days <= 5)
    {
        fine = late_days * 0.5;
        printf("fine=%d\n", fine);
    }
    else if (late_days >= 6 && late_days <= 10)
    {
        fine = late_days * 1;
        printf("fine=%d\n", fine);
    }
    else if (late_days > 10)
    {
        fine = late_days * 5;
        printf("fine=%d\n", fine);
        if (late_days > 30)
            printf("Your membership will be cancelled\n");
    }
    return 0;
}