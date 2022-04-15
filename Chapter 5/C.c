#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, fact, num, n, flag;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        printf("Choose one option\n");
        printf("1 for factorial\n2 for prime or not\n3 for odd or even\n4 for exit\n");
        scanf("%d", &n);
        switch (n)
        {

        case 1:
            printf("Enter the number:\n");
            scanf("%d", &num);
            fact = num;
            for (i = 1; i < num; i++)
            {
                fact = fact * i;
            }
            printf("Factorial of %d=%d\n", num, fact);
            break;

        case 2:
            printf("Enter the number\n");
            scanf("%d", &num);
            flag = 1;
            for (i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
                printf("%d is not prime\n", num);
            else if (flag == 1)
                printf("%d is prime number\n", num);
            break;

        case 3:
            printf("Enter the number\n");
            scanf("%d", &num);
            if (num % 2 == 0)
                printf("%d is even number\n", num);
            else
                printf("%d is odd number\n", num);
            break;

        case 4:
            exit(1);
        }
    }
    return 0;
}