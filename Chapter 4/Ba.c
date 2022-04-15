#include <stdio.h>
int main()
{
    int i = 1, time, overtime, pay;
    while (i <= 10)
    {
        printf("Enter the total time\n");
        scanf("%d", &time);
        if (time > 40)
        {
            overtime = time - 40;
            pay = overtime * 12;
            printf("Overtime pay=Rs.%d\n", pay);
        }
        else
            printf("No overtime pay\n");
        i++;
    }
    return 0;
}