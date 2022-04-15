#include <stdio.h>
int main()
{
    int num[25];
    int i, ser_num, pres = 0, count = 0;

    for (i = 0; i < 25; i++)
    {
        printf("Enter the number:");
        scanf("%d", &num[i]);
    }

    printf("Enter the number to be searched:");
    scanf("%d", &ser_num);

    for (i = 0; i < 25; i++)
    {
        if (num[i] == ser_num)
        {
            pres = 1;
            count++;
        }
    }

    if (pres == 1)
        printf("%d is present %d times in the array\n", ser_num, count);
    else
        printf("%d is not present in the array\n", ser_num);
    return 0;
}