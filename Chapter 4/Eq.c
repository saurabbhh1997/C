//Incomplete solution 

#include <stdio.h>
#include <math.h>

int main()
{
    int month, i;
    float rate, loan_amount, mi;
    printf("Enter the loan amount and rate\n");
    scanf("%f%f", &loan_amount, &rate);
    printf("Enter the months:\n");
    scanf("%d", &month);
    printf("Monthly instalments are:\n");
    for (i = 1; i <= month; i++)
    {
        mi = loan_amount / ((pow((rate + 1), month) - 1) / (rate * (pow((rate + 1), month))));
        printf("%f\t", mi);
    }
    return 0;
}