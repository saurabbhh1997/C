#include <stdio.h>
#include "interest.h"

int main()
{
    int time;
    float rate, amount, principal, si;

    printf("Enter the principal amount\n");
    scanf("%f", &principal);

    printf("Enter the rate and time:\n");
    scanf("%f%d", &rate, &time);

    si = SI(principal, rate, time);
    amount = AMOUNT(principal, rate, time);

    printf("Simple interest=%f\n", si);
    printf("Amount=%f\n", amount);
    return 0;
}