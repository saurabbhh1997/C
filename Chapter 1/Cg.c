#include <stdio.h>

int main()
{
    int sel, prof, cost;
    printf("Enter Selling price and profit earned of 15 items:\n");
    scanf("%d%d", &sel, &prof);
    sel = sel / 15;
    prof = prof / 15;
    cost = prof - sel;
    printf("Cost price of one item is:%d", cost);
    return 0;
}
