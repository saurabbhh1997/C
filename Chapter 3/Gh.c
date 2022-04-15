#include <stdio.h>
// #include <stdlib.h>
int main()
{
    int order_quantity, stock, remaining;
    // int credit;
    char credit;
    printf("Enter the quantity of stock:\n");
    scanf("%d", &stock);
    // fflush;
    printf("Enter the credit of customer:\n");
    // scanf("%d", &credit);
    // Note:---->we can't take an char input from keyboard after an int input due to Buffer(temporary storage area),
    // hence we have to use '\n' before '%c' in scanf() and have to use getchar() to take a char input.
    // Note:---->Here fflush was not working either/We should have use fflush(stdin).
    scanf("\n%c", &credit);
    getchar();
    printf("Enter the order quantity:\n");
    scanf("%d", &order_quantity);
    // if (credit == 1)
    if (credit == 'Y' || credit == 'y')
    {
        if (order_quantity <= stock)
            printf("Order will be supplied\n");
        else if (stock < order_quantity)
        {
            remaining = order_quantity - stock;
            printf("Remaining %d item will be supplied later\n", remaining);
        }
    }
    // else if (credit == 0)
    else if (credit == 'N' || credit == 'n')
        printf("Your credit is not OK\n");
    return 0;
}