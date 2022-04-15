#include <stdio.h>
#include <string.h>

int main()
{
    char card[20];
    int i, sum_o = 0, sum_e = 0, sum = 0;
    printf("Enter 16 digit credit card number:");
    scanf("%s", &card);
    for (i = 0; i < 16; i++)
    {
        card[i] -= 48;
        if (i % 2)
            sum = sum + card[i];
        else
        {
            card[i] *= 2;
            if (card[i] >= 10)
                card[i] -= 9;
            sum = sum + card[i];
        }
    }
    // printf("sum=%d\n", sum);
    if (sum % 10)
        printf("Invalid card\n");
    else
        printf("Valid Card\n");
    return 0;
}