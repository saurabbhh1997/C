#include <stdio.h>

void rec_bin(int);
void nonrec_bin(int);

int main()
{
    int num;
    printf("Enter the number for binary equivalent:\n");
    scanf("%d", &num);
    printf("\n\nUsing recursion binary Equivalent of %d is : ", num);
    rec_bin(num);

    printf("\n\nWithout using recursion binary Equivalent of %d is : ", num);
    nonrec_bin(num);
    return 0;
}

// non recursive function
void nonrec_bin(int num)
{
    int sum = 0;
    for (; num; num /= 2)
    {
        // Next digit will placed at first position.
        sum += num % 2;
        sum *= 10;
    }
    printf("%d", sum);
}

// recursive function
void rec_bin(int num)
{
    if (num == 0)
        return;
    rec_bin(num / 2);
    printf("%d", num % 2);
}