#include <stdio.h>
#include <conio.h>

void nonrec_pf(int);
int check_prime(int);
void rec_pf(int);
int main()
{
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);
    printf("Recursive function\n");
    rec_pf(num);
    printf("\n");
    nonrec_pf(num);
    _getch();
    return 0;
}

// non recursive function
void nonrec_pf(int num)
{
    printf("Non-recursive function\n");
    int i;
    for (i = 2; num != 1; i++) // loop for obtaining the numbers.
    {
        if (num % i != 0)
            continue;
        else
        {
            if (check_prime(i) == 1)
            {
                while (num % i == 0)
                {
                    printf("%d, ", i);
                    num /= i;
                }
            }
        }
    }
}

// recursive function
void rec_pf(int num)
{
    int i;
    if (num == 0)
        return;

    for (i = 2; i <= num; i++)
    {
        if (num % i != 0)
            continue;
        else
        {
            if (check_prime(i) == 1)
            {
                printf("%d, ", i);
                rec_pf(num / i);
                return;
            }
        }
    }
}

// returns 1 if prime, otherwise 0.
int check_prime(int num)
{
    int i = 2;
    while (i < num)
    {
        if (i % num == 0)
            break;
        i++;
    }
    if (i == num)
        return 1;
    return 0;
}