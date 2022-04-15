//Five digit number reverse and equality check

#include <stdio.h>
int main()
{
    int num, rev_num = 0, last_dig,orig_num;
    printf("Enter the number\n");
    scanf("%d", &num);
    orig_num=num;

    last_dig = num % 10;
    rev_num = rev_num + last_dig * 10000;
    num = num / 10;
    last_dig = num % 10;
    rev_num = rev_num + last_dig * 1000;
    num = num / 10;
    last_dig = num % 10;
    rev_num = rev_num + last_dig * 100;
    num = num / 10;
    last_dig = num % 10;
    rev_num = rev_num + last_dig * 10;
    num = num / 10;
    last_dig = num % 10;
    rev_num = rev_num + last_dig * 1;
    num = num / 10;
    if (orig_num == rev_num)
        printf("Original number and Reversed number are equal\n");
    else
        printf("Original number and Reversed number are not equal\n");
    printf("Original number=%d\nReversed number=%d\n", orig_num, rev_num);
    return 0;
}